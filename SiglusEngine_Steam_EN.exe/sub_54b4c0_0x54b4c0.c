// 函数: sub_54b4c0
// 地址: 0x54b4c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_21c
int32_t eax_1 = __security_cookie ^ &var_21c
uint32_t result

for (char* i = nullptr; i s< 0x10; i = &i[1])
    result = zx.d(*(i + &data_12c41a4))
    bool cond:0_1
    
    if (result != 0)
        if (result == 1)
            cond:0_1 = data_13132c0 == result
            goto label_54b505
        
        if (result != 2)
            if (result != 3 || data_13132f4 != 0)
                goto label_54b50b
            
            goto label_54b5d0
        
        cond:0_1 = data_13132f0 == 0
    else
        cond:0_1 = data_13132ec == result
    
label_54b505:
    
    if (cond:0_1)
    label_54b5d0:
        
        if (i u<= 0xf)
            if (&i[0x20] u<= 0x3f)
                WaitForSingleObject(data_641b54, 0xffffffff)
                sub_4c29d0(&i[0x20])
                ReleaseSemaphore(data_641b54, 1, nullptr)
            
            WaitForSingleObject(data_702788, 0xffffffff)
            
            if (&i[0x20] u<= 0x3f)
                sub_4cb390(i * 0x3c0 + 0x20b7050)
            
            result = ReleaseSemaphore(data_702788, 1, nullptr)
    else
    label_54b50b:
        void* edi_1 = i * 0x788
        
        if (*(edi_1 + &data_92b9a0) != 0 && *(edi_1 + 0x92bbb0) == 0)
            if (i != 0xffffffff && i u<= 0xf)
                result = sub_49e690(edi_1 + 0x92b978, &i[0x20])
            
            void var_218
            
            if (i == 0xffffffff || i u> 0xf || result == 0)
                result = sub_4a1640(sub_4cfd70(&var_218, edi_1 + &data_92b9a0), &var_218, i, 
                    nullptr, 0, *(edi_1 + 0x92bbec))

sub_5f02dd(eax_1 ^ &var_21c)
return result
