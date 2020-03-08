# 信息安全原理笔记
> 陈天洲老师

## 一、概论
### 1.计算机安全与社会
#### 1.1.计算机应用模式
* 主机计算
* 分布式C/S计算
* 互联网计算

#### 1.2.两类危险
> 硬件方面
* 自然灾害
* 人为破坏
* 操作失误
* 硬件故障
* 电磁干扰
* 丢失被盗


> 软件方面
* 软件数据或资料泄漏
* 被窃取
* 黑客病毒攻击

注：
* 现有杀毒软件不足以杀毒，病毒只是影响计算机安全运行的一个重要因素
* 现有反入侵技术不足以解决入侵
* 安全包括了病毒、软件漏洞、加密、防黑客、非法操作、系统物理故障等专业技术问题

#### 1.3.安全产品
> 网络安全市场定义为三个部分：
* 网络安全硬件
* 网络安全软件
* 网络安全服务

#### 1.4.网络硬件市场
* 防火墙和VPN
* 独立的VPN
* 入侵检测系统
* 认证令牌
* 生物识别系统
* 加密机和芯片

#### 1.5.网络安全软件
* 安全内容管理：
(1)防病毒
(2)网络控制
(3)邮件扫描
* 防火墙/VPN
* 入侵检测系统
* 安全3A(授权、认证和管理)
* 加密

> 注：
* 2004年8月19日，MD5算法被破解，RSA算法岌岌可危


#### 1.6.网络安全服务
* 顾问咨询
* 设计实施
* 运行管理
* 紧急响应
* 教育培训

#### 1.7.涉及的非计算机技术问题
* 安全监控和审计
* 法律政策问题和管理问题
* 物理场所的安全问题

### 2.计算机安全的基本概念
#### 2.1.安全的基本构成
* 机密性
> * 信息和资源的隐秘程度
> * 要求在敏感的领域比如商业、军事等领域使用时使信息保密
* 完整性
> * 涉及到数据或资源的确定性
> * 防止对数据进行不合理和无权限的修改
> * 包括
>> * 数据完整性（信息的内容）
>> * 完整性起源（数据的来源，经常叫做验证）

* 可用性
> * 可用性就是使用信息和得到资源的能力
> * 可用性是可靠性的一个重要方面。

#### 2.2 安全威胁
* 泄密，没有授权获得信息
* 欺骗，就是接受错误信息
* 中断，就是阻止正确的操作
* 篡夺，就是不授权地控制系统的一部分
* 监听（或称窥探）
* 窜改
* 伪装和欺骗
* 抵赖
* 延时
* 授权和伪装的分别

#### 2.3.安全性的目标
> 防止攻击
>> 成功的攻击防止意味着攻击的失败
>> 目前技术做不到

> 检测攻击
>> 攻击不能被防止

>> 监测机制当攻击发生时起作用

>> 监测出潜在的攻击，或者已经发生的攻击，并把它报告出来

>> 技术上部分可以

> 攻击以后恢复
>> 两种
>>> 攻击结束后，评估和修复攻击带来的损害
>>> 当攻击在进行中时，系统仍然正确地操作

>> 技术可以


#### 2.4.假设
> 安全建立在对于所需的安全的种类和所需的环境所做的明确的假设上

> 一个策略由策略制定者和一系列的被强行执行的规则组成。

> 政策的设计者总是制定两个假设：
* 策略正确，并明确区分系统状态处于“安全”和“不安全”。
* 安全机制阻止系统进入一个“不安全”的状态。

> 信赖这些机制的工作需要一些假设：

* 设计的每个机制执行一部分或者几个部分的安全策略。
* 机制联合执行安全策略的各个方面。
* 机制是被正确执行的。
* 机制安装和管理也是正确的。

#### 2.5.信任
* 信任也可叫做保证
* 举例：药品制造三个工艺（证明，制造标注，和预防性的密封 ）
* 保证：通过特别的步骤来保证计算机执行的功能和声明的一样。

#### 2.6.计算机的脆弱性
> 计算机的脆弱性是计算机安全的缘由，其脆弱性包括：
* 由于计算机属于电子产品，对抗环境能力弱；
* 数据密集，分布少；
* 由于主要的存储器是磁介质，容易出现剩磁，电磁泄漏现象；
* 通讯网是不设防的开放大系统；
* 共享与封闭的矛盾；
* 任何新技术都产生新的安全隐患；
* 软件是手工生产的，不可能完美无暇；
* 安全在系统设计中被放在不重要的位置。

### 3.计算机安全的重要性
* 计算机记录的信息有国家安全数据、企业资料等主要数据，不能泄漏
* 目前的信息系统对计算机依赖性越来越强
* 计算机已经在广泛学科中应用，社会对计算机依赖性越来越强
* 目前计算机安全面临的形势极其严峻：

> * 安全事件和系统漏洞数量巨增

> * 计算机病毒和垃圾邮件频频发生

> * 黑客活跃，计算机犯罪事件频发

> * 关键网站的安全防护仍然难以抵御攻击

* 世界各国纷纷开展安全技术研究：

> * 2002年9月18日美国颁布了《保护网络空间的国家战略》草案

> * 2002年9月20日颁布了《美国国家安全战略》

> * 美国国家安全局（NSA）推出了《信息保障技术框架(IATF)》

> * 美国政府制定了《网络空间人才(Cybercorps)计划》

> * 2002年2月7日通过的“网络安全研究与开发法案”确立了美国培养网络安全技术人才的原则

> * 在我们国内，已经成立了全国信息安全标准化委员会

### 4.计算机安全的定义

### 5.计算机犯罪
