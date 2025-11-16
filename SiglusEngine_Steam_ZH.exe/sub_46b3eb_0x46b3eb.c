// 函数: sub_46b3eb
// 地址: 0x46b3eb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0
SYSTEM_INFO systemInfo
GetSystemInfo(&systemInfo)
uint32_t dwPageSize = systemInfo.dwPageSize
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
arg1[1] = dwPageSize
int32_t eax_2 = (dwPageSize + arg3 - 1) & not.d(dwPageSize - 1)
int32_t ecx_2 = arg2
arg1[1] = eax_2

if (ecx_2 == 0)
    ecx_2 = 0x100000

arg1[5] = (eax_2 + ecx_2 - 1) & not.d(eax_2 - 1)
return arg1
