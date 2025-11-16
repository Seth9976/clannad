// 函数: sub_4cd170
// 地址: 0x4cd170
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = data_1392ccc
uint32_t result = 0xffffffff

if (ecx - data_702794 u>= 0xc8)
    HWAVEOUT hwo = data_1c04214
    data_702794 = ecx
    
    if (hwo != 0)
        MMTIME pmmt
        pmmt.wType = 4
        int32_t ms = 0xffffffff
        uint32_t result_1 = waveOutGetPosition(hwo, &pmmt, 0xc)
        
        if (result_1 == 0)
            ms = pmmt.u.ms
        else if (result_1 == 0xc)
            ms = pmmt.u.ms
        
        int32_t eax_4 = data_20be850
        
        if (eax_4 != 0xffffffff)
            if (ms != 0xffffffff)
                if (ms == data_20be854 || ms != eax_4)
                    data_20a1b93 = 0
                    data_20be850 = ms
                else
                    int32_t eax_5 = data_1392ccc
                    
                    if (data_20a1b93 == 0)
                        data_702790 = eax_5
                        data_20a1b93 = 1
                    else if (eax_5 - data_702790 u>= 0x12c)
                        sub_4cd020()
                        result = result_1
        else if (ms != eax_4)
            data_20be854 = ms
            data_20be850 = ms
    
    ReleaseSemaphore(data_702798, 1, nullptr)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
