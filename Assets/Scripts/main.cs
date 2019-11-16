using System;
using System.Linq;
using System.Threading;
using UnityEngine;
using Confluent.Kafka;

public class main : MonoBehaviour
{
	public TextMesh text;
	ConsumerBuilder<Ignore, string> cb;
	IConsumer<Ignore, string> c;
	ConsumerConfig conf;
	CancellationTokenSource cts;
	bool logging = false;
	int milliseconds = 10;
	TimeSpan timeout;

	// Start is called before the first frame update
	void Start()
	{
		print("main start");
		//conf = new ConsumerConfig
		//{
		//	GroupId = "test-consumer-group",
		//	BootstrapServers = "localhost:9092",
		//	AutoOffsetReset = AutoOffsetReset.Earliest,
		//};
		conf = new ConsumerConfig();
		conf.GroupId = "test-consumer-group";
		conf.BootstrapServers = "localhost:9092";
		conf.AutoOffsetReset = AutoOffsetReset.Earliest;

		cb = new ConsumerBuilder<Ignore, string>(conf);
		if (cb != null)
		{
			print("cb is ok: " + cb.ToString());
			c = cb.Build();
		}

		timeout = new TimeSpan(0, 0, 0, 0, milliseconds);
		
		//c.Subscribe("testTopicName");

		cts = new CancellationTokenSource();
		text.text = ".";
		print("main started");
	}

	public void toggleLogging()
	{
		print("in toggleLogging");
		logging = !logging;
	}

	public void consumeOnce()
	{
		print("in consumeOnce");
		try
		{
			print("try");
			//var cr = c.Consume(cts.Token);
			var cr = c.Consume(timeout);
			//c.Poll(100); // removed post v1 Beta https://stackoverflow.com/questions/50036052/difference-between-poll-and-consume-in-kafka-confluent-library
			if (cr != null && cr.Value.Count() > 0)
			{
				print($"Consumed message '{cr.Value}' at: '{cr.TopicPartitionOffset}'.");
				text.text += "\n" + cr.Value;
			}
		}
		catch (ConsumeException e)
		{
			print("catch 1 ConsumeException");
			print($"Error occured: {e.Error.Reason}");
		}
		catch (OperationCanceledException)
		{
			print("catch 2 OperationCanceledException");
			print("cancelled");
			// Ensure the consumer leaves the group cleanly and final offsets are committed.
			c.Close();
		}
		
		print("finally");
		
	}

	// Update is called once per frame
	void Update()
	{
		if (logging)
		{
			print("in update, logging");
			consumeOnce();
		}
		else
		{
			print("in update, logging: " + logging);
		}
	}

	void print(string msg)
	{
		Debug.Log(msg);
	}
}
