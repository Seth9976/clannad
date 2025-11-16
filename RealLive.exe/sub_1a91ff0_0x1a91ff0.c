// 函数: sub_1a91ff0
// 地址: 0x1a91ff0
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x1ad4528
char* var_10 = "U"
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_1 = data_1c09040
void* result

if (eax_1 == 3)
    if (arg1 u> data_1c0902c)
        goto label_1a920bf
    
    sub_1a976dc(9)
    int32_t var_8_1 = 0
    void* result_1 = sub_1a9624f(arg1)
    int32_t var_8_2 = 0xffffffff
    sub_1a92057()
    result = result_1
    
    if (result == 0)
        goto label_1a920bf
else if (eax_1 != 2)
label_1a920bf:
    uint32_t eax_5 = arg1
    
    if (eax_5 == 0)
        eax_5 = 1
    
    uint32_t dwBytes
    dwBytes.b = (eax_5 + 0xf).b & 0xf0
    result = HeapAlloc(data_1c09030, HEAP_NONE, dwBytes)
else
    uint32_t dwBytes_1
    
    if (arg1 == 0)
        dwBytes_1 = 0x10
    else
        dwBytes_1 = (arg1 + 0xf) & 0xfffffff0
    
    arg1 = dwBytes_1
    
    if (dwBytes_1 u<= data_1bfc0d4)
        sub_1a976dc(9)
        int32_t var_8_3 = 1
        void* result_2 = sub_1a97114(dwBytes_1 u>> 4)
        int32_t var_8_4 = 0xffffffff
        sub_1a920b6()
        result = result_2
    
    if (dwBytes_1 u> data_1bfc0d4 || result == 0)
        result = HeapAlloc(data_1c09030, HEAP_NONE, dwBytes_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
