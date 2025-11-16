// 函数: sub_54b690
// 地址: 0x54b690
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
char result = arg2
var_8:3.b = result
void* edi = 0x20

for (void* i = &data_208fdb0; i s< &data_20915b0; )
    if (*(edi + 0x12c4184) == result && data_641b5c != 0 && edi u<= 0x3f)
        WaitForSingleObject(data_641b54, 0xffffffff)
        
        if (arg1 s>= 0)
            int32_t eax = arg1
            
            if (arg1 s> 0xff)
                eax = 0xff
            
            *i = eax
        else
            *i = 0
        
        if (*(i - 0x58) != 0 && *(i - 0x5c) != 0)
            sub_4c33a0(edi)
        
        ReleaseSemaphore(data_641b54, 1, nullptr)
        result = var_8:3.b
    
    i += 0x180
    edi += 1

return result
