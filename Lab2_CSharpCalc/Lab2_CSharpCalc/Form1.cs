using System;
using System.Net;
using System.Runtime;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Text.RegularExpressions;
//using System.ServiceModel;
using GreeterClient;

//using DLLMathFunc;

namespace Lab2_CSharpCalc
{
    //[ServiceContract(Namespace = "http://localhost:62914/RestServiceImpl.svc")]
    //public interface

    public partial class Form1 : Form
    {
        //[DllImport @"GreeterClient")]
        //public float myClient(float nn);

        bool firstFlag;
        String prevOp;
		String curOp;
		float runningTotal;
        float currentVal;
        JackWeb.MyWebService WebObj = new JackWeb.MyWebService();
        GreeterClient.Program gRPC = new GreeterClient.Program();
        public Form1()
        {
            InitializeComponent();
            firstFlag = true;
            prevOp = "+";
            runningTotal = 0;
            currentVal = 0;
        }

        private void textBox1_TextChanged(object sender, EventArgs e) { }

        private void button1_Click(object sender, EventArgs e) {
            if (firstFlag) {
                textBox1.Text = "1";
                firstFlag = false;
            }
            else {
                textBox1.Text += "1";
            }
        }

        private void button2_Click(object sender, EventArgs e) {
            if(firstFlag){
                textBox1.Text = "2";
                firstFlag = false;
            }
            else {
                textBox1.Text += "2";
            }
        }

        private void button3_Click(object sender, EventArgs e) {
            if(firstFlag){
                textBox1.Text = "3";
                firstFlag = false;
            }
            else {
                textBox1.Text += "3";
            }
        }

        private void button6_Click(object sender, EventArgs e) {
            if (firstFlag) {
                textBox1.Text = "4";
                firstFlag = false;
            } else {
                textBox1.Text += "4";
            }
        }

        private void button5_Click(object sender, EventArgs e) {
            if (firstFlag) {
                textBox1.Text = "5";
                firstFlag = false;
            } else {
                textBox1.Text += "5";
            }
        }

        private void button4_Click(object sender, EventArgs e) {
            if (firstFlag) {
                textBox1.Text = "6";
                firstFlag = false;
            } else {
                textBox1.Text += "6";
            }
        }

        private void button9_Click(object sender, EventArgs e) {
            if (firstFlag) {
                textBox1.Text = "7";
                firstFlag = false;
            } else {
                textBox1.Text += "7";
            }
        }

        private void button8_Click(object sender, EventArgs e) {
            if (firstFlag) {
                textBox1.Text = "8";
                firstFlag = false;
            } else {
                textBox1.Text += "8";
            }
        }

        private void button7_Click(object sender, EventArgs e) {
            if (firstFlag) {
                textBox1.Text = "9";
                firstFlag = false;
            } else {
                textBox1.Text += "9";
            }
        }

        private void button11_Click(object sender, EventArgs e) {
            if (firstFlag) {
                textBox1.Text = "0";
                firstFlag = false;
            } else {
                textBox1.Text += "0";
            }
        }

        // Operators
        private void button12_Click(object sender, EventArgs e) {
            currentVal = Convert.ToSingle(textBox1.Text);
            if (prevOp == "+") {
                runningTotal += currentVal;
            } else if (prevOp == "-") {
                runningTotal -= currentVal;
            } else if (prevOp == "*") {
                runningTotal *= currentVal;
            } else if (prevOp == "/") {
                runningTotal /= currentVal;
            }
            textBox1.Text = Convert.ToString(runningTotal);
            prevOp = "+";
            firstFlag = true;
        }

        private void button10_Click(object sender, EventArgs e) {
            currentVal = Convert.ToSingle(textBox1.Text);
            if (prevOp == "+") {
                runningTotal += currentVal;
            } else if (prevOp == "-") {
                runningTotal -= currentVal;
            } else if (prevOp == "*") {
                runningTotal *= currentVal;
            } else if (prevOp == "/") {
                runningTotal /= currentVal;
            }
            textBox1.Text = Convert.ToString(runningTotal);
            prevOp = "-";
            firstFlag = true;
        }

        private void button15_Click(object sender, EventArgs e) {
            currentVal = Convert.ToSingle(textBox1.Text);
            if (prevOp == "+") {
                runningTotal += currentVal;
            } else if (prevOp == "-") {
                runningTotal -= currentVal;
            } else if (prevOp == "*") {
                runningTotal *= currentVal;
            } else if (prevOp == "/") {
                runningTotal /= currentVal;
            }
            textBox1.Text = Convert.ToString(runningTotal);
            prevOp = "*";
            firstFlag = true;
        }

        private void button14_Click(object sender, EventArgs e) {
            currentVal = Convert.ToSingle(textBox1.Text);
            if (prevOp == "+") {
                runningTotal += currentVal;
            } else if (prevOp == "-") {
                runningTotal -= currentVal;
            } else if (prevOp == "*") {
                runningTotal *= currentVal;
            } else if (prevOp == "/") {
                runningTotal /= currentVal;
            }
            textBox1.Text = Convert.ToString(runningTotal);
            prevOp = "/";
            firstFlag = true;
        }

        private void button13_Click(object sender, EventArgs e) {
            firstFlag = true;
            prevOp = "+";
            runningTotal = 0;
            currentVal = 0;
            textBox1.Text = "0";
        }

        private void button16_Click(object sender, EventArgs e) {
            currentVal = Convert.ToSingle(textBox1.Text);
            if (prevOp == "+") {
                runningTotal += currentVal;
            } else if (prevOp == "-") {
                runningTotal -= currentVal;
            } else if (prevOp == "*") {
                runningTotal *= currentVal;
            } else if (prevOp == "/") {
                runningTotal /= currentVal;
            }
            textBox1.Text = Convert.ToString(runningTotal);
            prevOp = "+";
            firstFlag = true;
        }

        private void button17_Click(object sender, EventArgs e) {
            //textBox1.Text = Convert.ToString(WebObj.SquaredMethod(runningTotal)); // this calls the sqaure method from the web service
            textBox1.Text = Convert.ToString(WebObj.SquaredMethod(runningTotal));
            prevOp = "+";
        }

        private void button18_Click(object sender, EventArgs e) {
            //percentFunc(runningTotal);
            prevOp = "+";
        }

        private void button19_Click(object sender, EventArgs e) {
            currentVal = Convert.ToSingle(textBox1.Text);

            /*
            Uri temp2 = new Uri(new Uri("http://localhost:62194/Service1.svc/sqr/"), textBox1.Text);

            using (WebClient myClient = new WebClient()) {
                var response = myClient.DownloadString(temp2); // needs to be Uri

                Regex regex = new Regex(@"\d+");            // integers one or more times
                Match match = regex.Match(response);        // filters out all but regex rule 
                ///// ############## Need to test############

                textBox1.Text = Convert.ToString(match);
                runningTotal = Convert.ToSingle(match);
            }
            */

            
            textBox1.Text = Convert.ToString(gRPC.myClient(currentVal));
            runningTotal = Convert.ToSingle(gRPC.myClient(currentVal));
            prevOp = "+";
        }
    }
}