// 函数: sub_447ed0
// 地址: 0x447ed0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* var_220 = &data_13517e0
__builtin_memset(&data_1af4538, 0xff, 0x14)
void fileName
uint32_t result =
    sub_4c3da0(sub_4c84d0(&fileName, "%s\support.ini"), 0xffffffff, &fileName, 0xffffffff)

if (result == 1)
    data_1af4538 = GetPrivateProfileIntA("Support", "SUPPORT_CDDA_VOL_FADE", 0xffffffff, &fileName)
    data_1af453c =
        GetPrivateProfileIntA("Support", "SUPPORT_CDDA_DEVICE_TYPE", 0xffffffff, &fileName)
    data_1af4540 =
        GetPrivateProfileIntA("Support", "SUPPORT_MOVIE_PLAY_TYPE", 0xffffffff, &fileName)
    data_1af4544 = GetPrivateProfileIntA("Support", "SUPPORT_MMX_USE", 0xffffffff, &fileName)
    result = GetPrivateProfileIntA("Support", "SUPPORT_D3D_USE", 0xffffffff, &fileName)
    data_1af4548 = result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
