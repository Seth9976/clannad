// 函数: sub_1a9a2c7
// 地址: 0x1a9a2c7
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x1ad4ba0
char* var_10 = "U"
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t dwBytes = arg1 * arg2
arg2 = dwBytes
uint32_t dwBytes_2 = dwBytes

if (dwBytes u<= 0xffffffe0)
    if (dwBytes == 0)
        dwBytes = 1
    
    dwBytes = (dwBytes + 0xf) & 0xfffffff0
    arg2 = dwBytes

void* result

while (true)
    void* result_1 = nullptr
    
    if (dwBytes u> 0xffffffe0)
        goto label_1a9a3c6
    
    int32_t eax_1 = data_1c09040
    uint32_t dwBytes_1
    
    if (eax_1 != 3)
        if (eax_1 != 2 || dwBytes u> data_1bfc0d4)
            goto label_1a9a3af
        
        sub_1a976dc(9)
        int32_t var_8_3 = 1
        result_1 = sub_1a97114(dwBytes u>> 4)
        int32_t var_8_4 = 0xffffffff
        sub_1a9a3e9()
        
        if (result_1 == 0)
            goto label_1a9a3c3
        
        dwBytes_1 = dwBytes
        goto label_1a9a3a7
    
    if (dwBytes_2 u> data_1c0902c)
        goto label_1a9a3af
    
    sub_1a976dc(9)
    int32_t var_8_1 = 0
    result_1 = sub_1a9624f(dwBytes_2)
    int32_t var_8_2 = 0xffffffff
    sub_1a9a360()
    
    if (result_1 == 0)
    label_1a9a3c3:
        result_1 = HeapAlloc(data_1c09030, HEAP_ZERO_MEMORY, dwBytes)
    label_1a9a3c6:
        
        if (result_1 == 0 && data_1c077a0 != 0)
            result = sub_1a97794(dwBytes)
            
            if (result == 0)
                break
            
            continue
    else
        dwBytes_1 = dwBytes_2
    label_1a9a3a7:
        sub_1a917d0(result_1, 0, dwBytes_1)
    label_1a9a3af:
        
        if (result_1 == 0)
            goto label_1a9a3c3
    
    result = result_1
    break

fsbase->NtTib.ExceptionList = ExceptionList
return result
