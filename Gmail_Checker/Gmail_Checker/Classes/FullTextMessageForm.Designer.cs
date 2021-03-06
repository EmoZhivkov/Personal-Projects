﻿using Gmail_Checker.Interfaces;

namespace Gmail_Checker.Classes
{
    partial class FullTextMessageForm
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
        public void LoadFullMessageData(string content, string sender, string subject)
        {
            this.FullTextBox.Text = content;
            this.SubjectLabel.Text = subject;
            this.SenderLabel.Text = sender;
        }
        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(FullTextMessageForm));
            this.FullTextBox = new System.Windows.Forms.TextBox();
            this.SenderLabel = new System.Windows.Forms.Label();
            this.SubjectLabel = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // FullTextBox
            // 
            this.FullTextBox.BackColor = System.Drawing.Color.Silver;
            this.FullTextBox.Font = new System.Drawing.Font("Segoe UI Semibold", 10.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.FullTextBox.Location = new System.Drawing.Point(12, 57);
            this.FullTextBox.Multiline = true;
            this.FullTextBox.Name = "FullTextBox";
            this.FullTextBox.Size = new System.Drawing.Size(839, 365);
            this.FullTextBox.TabIndex = 0;
            // 
            // SenderLabel
            // 
            this.SenderLabel.AutoSize = true;
            this.SenderLabel.Font = new System.Drawing.Font("Segoe UI Semibold", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.SenderLabel.Location = new System.Drawing.Point(9, 9);
            this.SenderLabel.Name = "SenderLabel";
            this.SenderLabel.Size = new System.Drawing.Size(93, 20);
            this.SenderLabel.TabIndex = 1;
            this.SenderLabel.Text = "SenderLabel";
            // 
            // SubjectLabel
            // 
            this.SubjectLabel.AutoSize = true;
            this.SubjectLabel.Font = new System.Drawing.Font("Segoe UI Semibold", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.SubjectLabel.Location = new System.Drawing.Point(9, 32);
            this.SubjectLabel.Name = "SubjectLabel";
            this.SubjectLabel.Size = new System.Drawing.Size(95, 20);
            this.SubjectLabel.TabIndex = 2;
            this.SubjectLabel.Text = "SubjectLabel";
            // 
            // FullTextMessageForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(224)))), ((int)(((byte)(224)))), ((int)(((byte)(224)))));
            this.ClientSize = new System.Drawing.Size(854, 438);
            this.Controls.Add(this.SubjectLabel);
            this.Controls.Add(this.SenderLabel);
            this.Controls.Add(this.FullTextBox);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "FullTextMessageForm";
            this.Text = "Full Message";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox FullTextBox;
        private System.Windows.Forms.Label SenderLabel;
        private System.Windows.Forms.Label SubjectLabel;
    }
}