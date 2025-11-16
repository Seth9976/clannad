// 函数: sub_62c100
// 地址: 0x62c100
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0968
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4f4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
var_4e0
_memset(&var_4e0, 0, 0x118)
OSVERSIONINFOW versionInformation
versionInformation.dwOSVersionInfoSize = 0x11c
GetVersionExW(&versionInformation)
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
int32_t var_8_1 = 0
int16_t var_518
int32_t var_2c

if (sub_662fa0(&var_44) != 0)
    int16_t* eax_6 = &var_44
    
    if (var_30 u>= 8)
        eax_6 = var_44.d
    
    int16_t* var_4f8_5 = eax_6
    uint32_t dwMinorVersion = versionInformation.dwMinorVersion
    uint32_t dwMajorVersion = versionInformation.dwMajorVersion
    sub_52e820(&var_518, 0xaf4f70)
    int16_t* eax_7 = sub_6ae4c0(&var_2c, var_518)
    var_8_1.b = 3
    sub_684160(data_bac424, 5, eax_7)
    var_8_1.b = 0
else
    int16_t* eax_4 = sub_6b9ed0(&var_2c)
    var_8_1.b = 1
    int16_t var_5c
    int16_t* eax_5 = sub_548cb0(eax_4, 0xaf4f48, &var_5c, eax_4)
    var_8_1.b = 2
    sub_684160(data_bac424, 3, eax_5)
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
    var_8_1.b = 0

int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c)

MEMORYSTATUS buffer
buffer.dwAvailVirtual = 0
buffer.dwAvailPageFile = 0
buffer.dwTotalVirtual = 0
buffer.dwMemoryLoad = 0
buffer.dwTotalPhys = 0
buffer.dwAvailPhys = 0
buffer.dwTotalPageFile = 0
buffer.dwLength = 0x20
GlobalMemoryStatus(&buffer)
uint32_t var_4f8_9 = buffer.dwTotalPhys u>> 0x14
int16_t* var_510
sub_52e820(&var_510, &data_af4f98)
int16_t* eax_10 = sub_6ae4c0(&var_2c, var_510)
var_8_1.b = 4
sub_684160(data_bac424, 5, eax_10)
var_8_1.b = 0

if (var_18 u>= 8)
    j__free(var_2c)

var_510 = &data_af4fb4
void var_50c
sub_52e820(&var_50c, var_510)
var_510 = &var_2c
int16_t* eax_11 = sub_6ae4c0(var_510, var_50c)
var_8_1.b = 5
sub_684160(data_bac424, 5, eax_11)
var_8_1.b = 0

if (var_18 u>= 8)
    j__free(var_2c)

uint32_t iDevNum = 0
var_3a0
_memset(&var_3a0, 0, 0x344)
DISPLAY_DEVICEW displayDevice
displayDevice.cb = 0x348
BOOL i
int32_t ecx_10
i, ecx_10 = EnumDisplayDevicesW(nullptr, 0, &displayDevice, 0)

for (; i != 0; i = EnumDisplayDevicesW(nullptr, iDevNum, &displayDevice, 0))
    void* var_4f8_16 = &var_3a0
    var_360
    void* var_4fc_7 = &var_360
    uint32_t iDevNum_1 = iDevNum
    int32_t var_504_1 = 7
    int32_t var_508_1 = 0
    var_518 = 0
    sub_52e720(&var_518, 0xaf4fdc, 0xf)
    int16_t* eax_12 = sub_6ae4c0(&var_2c, var_518)
    var_8_1.b = 6
    sub_684160(data_bac424, 5, eax_12)
    var_8_1.b = 0
    
    if (var_18 u>= 8)
        j__free(var_2c)
    
    iDevNum += 1
    _memset(&var_3a0, 0, 0x344)
    displayDevice.cb = 0x348

if (var_30 u>= 8)
    i = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return i
