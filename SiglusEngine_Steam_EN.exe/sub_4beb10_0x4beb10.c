// 函数: sub_4beb10
// 地址: 0x4beb10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
data_641b38 = 0
data_1bfe268 = 0xffffffff
data_1bfffcc = 0xffffffff
data_1bfe264 = 0
data_1bfe260 = 1
data_1bfffc8 = 0
data_1af44ec = 0
data_1af44fc = 0
data_208c49c = 0
__builtin_memset(&data_208c6ec, 0, 0x24)
__builtin_memcpy(&data_208c710, 
    "\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\x"
"ff\x00\x00\x00", 
    0x1c)
OSVERSIONINFOA versionInformation
sub_4d1ba0(eax_1, 0x94, &versionInformation, 0)
versionInformation.dwOSVersionInfoSize = 0x94
int32_t eax_3

if (GetVersionExA(&versionInformation) == 0 || versionInformation.dwPlatformId != 2
        || versionInformation.dwMajorVersion u< 6)
    eax_3 = 0
else
    eax_3 = 1

data_208c6d8 = eax_3
HANDLE result = CreateSemaphoreA(nullptr, 1, 1, nullptr)
data_641b34 = result
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
