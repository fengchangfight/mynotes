2016/5/7
//finish correct user showing 
//add tab of resource bundle
//*add copyright statement for js files
//fix bug of create openstack page
//add copyright statement for html files
//revert due to embedded html issue
//ask VPN
//UI issue in create blueprint component(drop down look weird)
//update logo(by mao)
//research import blueprint

2016/5/12
//give effort estimation
// volume attach issue
//copy simple mode env config instance do and verify
//simple mode openstack key pair issue update and verify 
	//generate sshkey file
	//update the path in elastic search
		//wait for bob to reset

2016/5/16
//finish the availability zone backend service, enhance the table look of it a bit
//research login logic 

2016/5/18
//openstack interface add
//add implementation  of data fetch interface
//add service layer

//need UI provide cloudEntryId and vmid

2016/5/19
//data fetch logic implementation


2016/5/20
//UI and frontend logic implement
//dynamic load view for openstack or vsphere(maybe more )


2016/5/23
／／split branch for virtual machine details
//update jira

2016/5/25
//发ppt
//dropbox 账户
//面试题库
//退工相关
//jira update, review
//checkzwq'spush
//secgroup expand detail in dep?
//translate issue
//get secgroup
//finish remaining vm detail for openstack
//get attached volume of server
//phone interview
//reimbersement procedure walk through
//openstack4j
//volume size mandatory



2016/5/31
//learn spring mvc framework: http://www.tutorialspoint.com/spring/spring_web_mvc_framework.htm
//implement API:
	//get all vm list
	//get all snapshots under a vm list
//get floating ip addr in vm detail
//delete node not refresh issue... not reproduceble
//catalog linked clone front end(vsphere)
//catalog linked clone service implementation(vsphere)
//virtual_machine page ip address????? ask bob

2016/6/2
//几个小建议： queryVSphereVMHassnapshot，建议用VmWithSnapshot
//不过具体到这件事，其实我们还是需要把VM fId放到CloudResoruce的ID里面，这样的话，CloudResource也就能更符合逻辑并且与当初的设计match起来。
//fix bug of save 


2016/6/3
//API for getting openstack router
//learn spring data mongodb
//hard clone by default
//add cluster entry in cloudentry page

2016/6/5
//check if the same issue exist in bp
//volume min.js issue/grunt issue
//multi server issue
//catalog delete not refresh in db issue

2016/6/6
add global validation for disk
//storage not showing issue
//use hidden id

2016/6/7
dashboard blueprint 
vm details page, template empty when linked clone
   
2016/6/8
//validation in vsphere rb
//use number input type for disk
//filter request by  tenant
//filter tenant for virtual machine
//filter tenant for inbox
..test with inbox data
..check vs cloudentry validation
add full validation
make tenant real
//~learn NSX
~learn nginx
~spring data examples in github

//write approval partn 
provision openstack with username/password option
	what happens when request for a 
post-creation, cloudify
	test with python client api
		install python sdk of openstack
UI on configure CPU
bug on vs snapshot loading
postflight down
research how the task work
fix starting error on tenant

//housekeeping?

/*
Rename/refactor Expired and Tear down (hour -> day, no power off)
timeout/re-login/error-login handler
license (time + VM numbers)
action list for imported VMs
whole flow for imported vm
Move expire/teardown from BP to Catalog Item
Notification email template / config rather than GUI
email server setup for tenant / config rather than GUI
custom logo
*/

//license to control vm numbers
//implement shutdown of day2op
//think about design of vm management(how to sync)
//think about importvm 2 steps
//refactor input 3 parameter for vsphere
//timeout issue
//get license if license is empty
//fix "if null license in db then no pop up for license"
//notification/request header, cc-525
//is there a general way to avoid duplicate?
//password_c issue
//give license except 中国银行
//notification detail still id rather than name
//learn docker
//fix bug of vm operation empty
//openstack resource bundle allocation bundle empty deployment detail
//do not allow duplicate import, how to define duplicate here? only externalId?

provide upgrade license
discuss with bob about import vm workflow
integration with cloudify
openstack has more network than it should has
modify scheduler and to the real testing
reset password option/ install agent option
duplicate check for torn down catalog
add operation history for add monitoring
fapiao tianxie,zhishaoyiqian
learn this in 2 parts:
	https://www.youtube.com/watch?v=-OGvr0bjEkU
test add monitor functionality
fix nova scheduler issue on host agg
install software on node
what the hell is grafana?

