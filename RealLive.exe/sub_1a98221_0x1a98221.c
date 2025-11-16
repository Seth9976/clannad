// 函数: sub_1a98221
// 地址: 0x1a98221
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x1ad47a0
char* var_10 = "U"
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpMem = arg1
void* result

if (lpMem != 0)
    void* dwBytes = arg2
    
    if (dwBytes != 0)
        int32_t eax_1 = data_1c09040
        
        if (eax_1 == 3)
            int32_t i
            
            do
                int32_t* var_28_1 = nullptr
                
                if (dwBytes u<= 0xffffffe0)
                    sub_1a976dc(9)
                    int32_t var_8_1 = 0
                    void* eax_2 = sub_1a95efb(lpMem)
                    void* var_2c_1 = eax_2
                    
                    if (eax_2 != 0)
                        if (dwBytes u<= data_1c0902c)
                            if (sub_1a96704(eax_2, lpMem, dwBytes) == 0)
                                void* eax_4 = sub_1a9624f(dwBytes)
                                var_28_1 = eax_4
                                
                                if (eax_4 != 0)
                                    void* dwBytes_1 = lpMem[-1] - 1
                                    void* dwBytes_7 = dwBytes_1
                                    
                                    if (dwBytes_1 u>= dwBytes)
                                        dwBytes_1 = dwBytes
                                    
                                    sub_1a91aa0(var_28_1, lpMem, dwBytes_1)
                                    void* eax_6 = sub_1a95efb(lpMem)
                                    var_2c_1 = eax_6
                                    sub_1a95f26(eax_6, lpMem)
                            else
                                var_28_1 = lpMem
                        
                        if (var_28_1 == 0)
                            if (dwBytes == 0)
                                dwBytes = 1
                                arg2 = 1
                            
                            dwBytes = (dwBytes + 0xf) & 0xfffffff0
                            arg2 = dwBytes
                            int32_t* eax_7 = HeapAlloc(data_1c09030, HEAP_NONE, dwBytes)
                            var_28_1 = eax_7
                            
                            if (eax_7 != 0)
                                void* dwBytes_2 = lpMem[-1] - 1
                                void* dwBytes_8 = dwBytes_2
                                
                                if (dwBytes_2 u>= dwBytes)
                                    dwBytes_2 = dwBytes
                                
                                sub_1a91aa0(var_28_1, lpMem, dwBytes_2)
                                sub_1a95f26(var_2c_1, lpMem)
                    
                    int32_t var_8_2 = 0xffffffff
                    sub_1a983ac()
                    
                    if (var_2c_1 == 0)
                        if (dwBytes == 0)
                            dwBytes = 1
                        
                        dwBytes = (dwBytes + 0xf) & 0xfffffff0
                        arg2 = dwBytes
                        var_28_1 = HeapReAlloc(data_1c09030, HEAP_NONE, lpMem, dwBytes)
                
                result = var_28_1
                
                if (result != 0)
                    goto label_1a98544
                
                if (data_1c077a0 == 0)
                    goto label_1a98544
                
                i = sub_1a97794(dwBytes)
            while (i != 0)
        else if (eax_1 != 2)
            int32_t i_1
            
            do
                result = nullptr
                
                if (dwBytes u<= 0xffffffe0)
                    if (dwBytes == 0)
                        dwBytes = 1
                    
                    dwBytes = (dwBytes + 0xf) & 0xfffffff0
                    result = HeapReAlloc(data_1c09030, HEAP_NONE, lpMem, dwBytes)
                
                if (result != 0)
                    goto label_1a98544
                
                if (data_1c077a0 == 0)
                    goto label_1a98544
                
                i_1 = sub_1a97794(dwBytes)
            while (i_1 != 0)
        else
            if (dwBytes u<= 0xffffffe0)
                if (dwBytes u<= 0)
                    dwBytes = 0x10
                else
                    dwBytes = (dwBytes + 0xf) & 0xfffffff0
                
                arg2 = dwBytes
            
            int32_t i_2
            
            do
                void* result_1 = nullptr
                
                if (dwBytes u<= 0xffffffe0)
                    sub_1a976dc(9)
                    int32_t var_8_3 = 1
                    void** var_3c
                    void** var_30
                    char* eax_10 = sub_1a97078(lpMem, &var_3c, &var_30)
                    char* var_34_1 = eax_10
                    
                    if (eax_10 == 0)
                        result_1 = HeapReAlloc(data_1c09030, HEAP_NONE, lpMem, dwBytes)
                    else
                        if (dwBytes u< data_1bfc0d4)
                            uint32_t ebx_1 = dwBytes u>> 4
                            
                            if (sub_1a97440(var_3c, var_30, eax_10, ebx_1) == 0)
                                void* result_2 = sub_1a97114(ebx_1)
                                result_1 = result_2
                                
                                if (result_2 != 0)
                                    void* dwBytes_3 = zx.d(*eax_10) << 4
                                    void* dwBytes_5 = dwBytes_3
                                    
                                    if (dwBytes_3 u>= dwBytes)
                                        dwBytes_3 = dwBytes
                                    
                                    sub_1a91aa0(result_1, arg1, dwBytes_3)
                                    sub_1a970cf(var_3c, var_30, eax_10)
                            else
                                result_1 = arg1
                            
                            lpMem = arg1
                        
                        if (result_1 == 0)
                            void* result_3 = HeapAlloc(data_1c09030, HEAP_NONE, dwBytes)
                            result_1 = result_3
                            
                            if (result_3 != 0)
                                void* dwBytes_4 = zx.d(*eax_10) << 4
                                void* dwBytes_6 = dwBytes_4
                                
                                if (dwBytes_4 u>= dwBytes)
                                    dwBytes_4 = dwBytes
                                
                                sub_1a91aa0(result_1, lpMem, dwBytes_4)
                                sub_1a970cf(var_3c, var_30, eax_10)
                    
                    int32_t var_8_4 = 0xffffffff
                    sub_1a984fa()
                
                result = result_1
                
                if (result != 0)
                    goto label_1a98544
                
                if (data_1c077a0 == 0)
                    goto label_1a98544
                
                i_2 = sub_1a97794(dwBytes)
            while (i_2 != 0)
    else
        sub_1a91ec9(lpMem)
    
    result = nullptr
else
    result = sub_1a91fb2(arg2)

label_1a98544:
fsbase->NtTib.ExceptionList = ExceptionList
return result
