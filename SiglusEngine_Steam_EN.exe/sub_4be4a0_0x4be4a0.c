// 函数: sub_4be4a0
// 地址: 0x4be4a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result
uint32_t mciId = data_139270c

if (mciId != 0xffffffff)
    int32_t dwParam2_1 = data_2074448
    int32_t var_10_1 = 4
    result = mciSendCommandA(mciId, 0x814, 0x101, &dwParam2_1)
    int32_t var_14
    
    if (var_14 == 0x20d)
        if (data_1bfe240 != 0)
            mciSendCommandA(data_139270c, 0x807, 0x102, 0)
            int32_t eax_2 = data_2074448
            int128_t dwParam2 = zx.o(0)
            dwParam2.d = eax_2
            result = mciSendCommandA(data_139270c, 0x806, 1, &dwParam2)
            
            if (result != 0)
                result = sub_4be270()
        else
            if (data_2080468 == 0)
                data_1392708 = 0
                sub_5f02dd(result_1 ^ &__saved_ebp)
                return result
            
            result = sub_4be270()

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
