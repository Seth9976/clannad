// 函数: sub_4078b6
// 地址: 0x4078b6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t result

if (data_b95afc == 0)
    data_b95afc = 1
    OSVERSIONINFOA versionInformation
    versionInformation.dwOSVersionInfoSize = 0x94
    GetVersionExA(&versionInformation)
    result.b = versionInformation.dwPlatformId == 2
    data_b95af8 = result
else
    result = data_b95af8

sub_745f2b(__security_cookie_1)
return result
