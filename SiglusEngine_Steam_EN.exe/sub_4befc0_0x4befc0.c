// 函数: sub_4befc0
// 地址: 0x4befc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
WaitForSingleObject(data_641b34, 0xffffffff)

if (data_1bfe268 != 0xffffffff && data_1bfe264 != 0 && data_1bfe260 != 0)
    int32_t ecx_1 = data_1392ccc
    
    if (ecx_1 - data_641b30 u>= 0xc8)
        int32_t esi_1 = 0
        
        if (data_208c6d8 != 0 && ecx_1 - data_641b2c u>= 0x2bc)
            int32_t var_30
            int32_t var_2c
            int32_t var_28
            int32_t var_24
            
            if (sub_4bf530(&var_24, &var_2c, &var_30, &var_24, &var_28) == 0)
                data_208c6dc = 0xffffffff
                data_208c6e0 = 0xffffffff
                data_208c6e4 = 0xffffffff
                data_208c6e8 = 0xffffffff
            else
                int32_t edi_1 = var_30
                int32_t eax_8 = var_28
                int32_t ecx_3 = var_24
                int32_t edx_2 = var_2c
                
                if (data_208c6dc != edi_1 || data_208c6e0 != edx_2 || data_208c6e4 != ecx_3
                        || data_208c6e8 != eax_8)
                    data_208c6dc = edi_1
                    data_208c6e0 = edx_2
                    data_208c6e4 = ecx_3
                    data_208c6e8 = eax_8
                else
                    esi_1 = 1
            
            ecx_1 = data_1392ccc
            data_641b2c = ecx_1
        
        data_641b30 = ecx_1
        
        if (sub_4bf1e0() == 0x20d || esi_1 != 0)
            if (data_1bfe25c != 0)
                uint32_t mciId = data_1bfe268
                int32_t var_18_1 = 0
                int64_t dwParam2 = 0
                dwParam2:4.d = 0xa
                mciSendCommandA(mciId, 0x80d, 0x402, &dwParam2)
                uint32_t ecx_6 = zx.d(data_208c6c4) << 8 | zx.d(data_208c6c0)
                int64_t dwParam2_1 = 0
                int32_t var_c_1 = 0
                dwParam2_1:4.d = (ecx_6 << 8 | zx.d(data_208c6bc)) << 8 | zx.d(data_208c6b8)
                dwParam2_1.d = data_7027bc
                uint32_t var_c_2 =
                    ((zx.d(data_208c6d4) << 8 | zx.d(data_208c6d0)) << 8 | zx.d(data_208c6cc)) << 8
                    | zx.d(data_208c6c8)
                mciSendCommandA(data_1bfe268, 0x806, 0xd, &dwParam2_1)
            else
                sub_4bef40()

BOOL result = ReleaseSemaphore(data_641b34, 1, nullptr)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
