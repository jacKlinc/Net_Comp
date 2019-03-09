namespace Lab6_Holiday
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.ChooseYear = new System.Windows.Forms.ComboBox();
            this.Request = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // ChooseYear
            // 
            this.ChooseYear.FormattingEnabled = true;
            this.ChooseYear.Items.AddRange(new object[] {
            "2017",
            "2018",
            "2019",
            "2020",
            "2021",
            "2022"});
            this.ChooseYear.Location = new System.Drawing.Point(213, 207);
            this.ChooseYear.Name = "ChooseYear";
            this.ChooseYear.Size = new System.Drawing.Size(97, 21);
            this.ChooseYear.TabIndex = 0;
            this.ChooseYear.Text = "Year";
            // 
            // Request
            // 
            this.Request.Location = new System.Drawing.Point(23, 205);
            this.Request.Name = "Request";
            this.Request.Size = new System.Drawing.Size(171, 23);
            this.Request.TabIndex = 1;
            this.Request.Text = "Search";
            this.Request.UseVisualStyleBackColor = true;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(23, 27);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(287, 174);
            this.textBox1.TabIndex = 2;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoScroll = true;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.Request);
            this.Controls.Add(this.ChooseYear);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox ChooseYear;
        private System.Windows.Forms.Button Request;
        private System.Windows.Forms.TextBox textBox1;
    }
}

