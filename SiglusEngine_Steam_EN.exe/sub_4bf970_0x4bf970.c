// 函数: sub_4bf970
// 地址: 0x4bf970
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t mciId = data_1bfe268

if (mciId != 0xffffffff && data_1bfe264 != 0)
    int32_t var_410_1 = 0
    int64_t dwParam2 = 0
    uint32_t mcierr = mciSendCommandA(mciId, 0x808, 2, &dwParam2)
    Sleep(0x96)
    
    if (mcierr != 0)
        uint8_t var_40c[0x404]
        mciGetErrorStringA(mcierr, &var_40c, 0x400)
        MessageBoxA(data_7027bc, &var_40c, 0x61c65c, MB_OK)
    
    mciId = data_208c70c
    data_1bfe264 = 0
    
    if (mciId != 0 && data_63e788 != 0)
        if (data_208c6ec == 0)
            int32_t i = 0
            
            if (mciId s> 0)
                do
                    mciId = auxSetVolume(*((i << 2) + &data_208cc50), *((i << 2) + &data_208ccd0))
                    i += 1
                while (i s< data_208c70c)
        else
            mciId = sub_4c0310(0)
    
    __builtin_memset(&data_208c6f0, 0, 0x1c)
    __builtin_memcpy(&data_208c710, 
        "\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x"
    "00\xff\x00\x00\x00", 
        0x1c)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return mciId
