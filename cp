<!DOCTYPE html>
<html>
<head>
	<title>网址访问受到限制</title>
<meta name="viewport"
		content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
	<style>
body {
	font-family: Arial, sans-serif;
	text-align: center;
	background-color: #f2f2f2;  /* 背景颜色为浅灰色 */
	padding: 10px;  /* 页面内边距为50像素 */
}

.container {
	max-width: 400px;  /* 容器最大宽度为400像素 */
	margin: 0 auto;  /* 居中对齐容器 */
	background-color: #ffffff;  /* 容器背景色为白色 */
	border-radius: 10px;  /* 容器边框圆角弧度为10像素 */
	padding: 30px;  /* 容器内边距为30像素 */
	box-shadow: 0 3px 6px rgba(0, 0, 0, 0.1);  /* 添加轻微阴影效果 */
}

h1 {
	color: #333333;  /* 标题颜色为深灰色 */
}

label {
	display: block;
	margin-bottom: 10px;  /* 底边距为10像素 */
	color: #666666;  /* 标签颜色为浅灰色 */
	font-weight: bold;  /* 标签字体加粗 */
}

input[type="password"] {
	width: 100%;  /* 密码输入框宽度占满容器 */
	padding: 10px;  /* 输入框内边距为10像素 */
	border: 1px solid #cccccc;  /* 输入框边框为浅灰色 */
	border-radius: 5px;  /* 输入框边框圆角弧度为5像素 */
}

button {
	margin-top: 20px;  /* 顶边距为20像素 */
	padding: 15px 60px;  /* 按钮内边距为10像素顶部和底部，20像素左右 */
	background-color: #4CAF50;  /* 按钮背景色为绿色 */
	color: #ffffff;  /* 按钮文本颜色为白色 */
	border: none;  /* 去除按钮边框 */
	border-radius: 5px;  /* 按钮边框圆角弧度为5像素 */
	cursor: pointer;  /* 鼠标悬停时显示手型光标 */
}

img {
	margin-top: 20px;  /* 顶边距为30像素 */
	max-width: 80%;  /* 图片最大宽度为容器宽度 */
	border-radius: 5px;  /* 图片边框圆角弧度为5像素 */
}
p {
            font-size: 15px; /* 设置字体大小为20像素 */
            font-family: Arial, sans-serif; /* 设置字体样式为Arial或sans-serif */
        }
	</style>
	<script type="text/javascript">
		function checkPassword() {
			var password = document.getElementById("password").value;
			if (password === "6900") { // 将"123456"替换为您设定的密码
				window.location.href = "https://p2.qpic.cn/qqgameedu/0/38234bac3638088e9b78187517a3038a/0"; // 将"跳转.html"替换为您要跳转的页面
			} else {
				alert("密码输入错误，请扫描下面二维码，获取密码"); // 密码不正确时弹出提示框
			}
		}
	</script>
</head>
<body>
	<div class="container">
		<h1>网址访问受到限制</h1>
		<label for="password">请输入密码:</label>
		<input type="password" id="password" name="password" placeholder="请输入您获取的密码">
		<br><br>
		<button onclick="checkPassword()">确认</button>
		<br>
      <h2>密码获取方式</h2>
		<img src="https://p2.qpic.cn/qqgameedu/0/81b09ad6ec788966947e2b41c7a5e52c/0" alt="Your Image">
          <!--图片更改，里面链接改成自己的图片链接就可以了-->
	          <p>长按图片保存，用vx扫一扫二维码
             <br>
             点击右下角详情，观看广告后自动复制密码</p>
   </div>
</body>
</html>
