// 函数: sub_462e55
// 地址: 0x462e55
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t* eax = *(arg1 + 0x50)
int32_t edi
int32_t var_a4 = edi
int32_t result

if (eax == 0 || *eax == 0)
label_462ff5:
    result = 0
else
    int32_t* eax_1 = *(arg1 + 0x54)
    
    if (eax_1 == 0 || *eax_1 == 0)
    label_462ff5_1:
        result = 0
    else
        int32_t eax_2 = *(arg1 + 0x40)
        
        if (eax_2 == 0)
            int32_t var_a8_2 = 0x37
            sub_460651(arg1)
        else if (eax_2 == 1)
            sub_460f5b(arg1, *(arg1 + 0x58))
            sub_460594(arg1, "BINARY_RESOURCE ")
        
        uint32_t lDistanceToMove_2 = SetFilePointer(*(arg1 + 0x3c), 0, nullptr, FILE_CURRENT)
        uint32_t lDistanceToMove = lDistanceToMove_2
        
        if (lDistanceToMove_2 == 0xffffffff)
            result = 0x8876038f
        else
            int32_t var_8c_1 = 0
            
            if (**(arg1 + 0x50) u<= 0)
            label_462ff5_2:
                result = 0
            else
                while (SetFilePointer(*(arg1 + 0x3c), (*(*(arg1 + 0x54) + 0xc))[var_8c_1], nullptr, 
                        FILE_BEGIN) != 0xffffffff)
                    uint32_t lDistanceToMove_1 = lDistanceToMove
                    sub_4822c9(arg1)
                    int32_t var_a8_3 = 0
                    sub_4822c9(arg1)
                    
                    if (SetFilePointer(*(arg1 + 0x3c), lDistanceToMove, nullptr, FILE_BEGIN)
                            == 0xffffffff)
                        break
                    
                    HANDLE hObject = CreateFileA((*(*(arg1 + 0x50) + 0xc))[var_8c_1], 0x80000000, 
                        FILE_SHARE_NONE, nullptr, OPEN_EXISTING, 0x8000080, nullptr)
                    
                    if (hObject == 0xffffffff)
                        break
                    
                    int32_t var_a8_4 = 0
                    int32_t var_94
                    int32_t* lpNumberOfBytesRead = &var_94
                    int32_t var_b0_3 = 0x80
                    void var_88
                    uint8_t* lpBuffer = &var_88
                    int32_t ebx_3 = 0
                    HANDLE hFile = hObject
                    
                    while (ReadFile(hFile, lpBuffer, 0x80, lpNumberOfBytesRead, nullptr) != 0)
                        if (var_94 == 0)
                            break
                        
                        sub_460633(arg1, var_94, &var_88)
                        ebx_3 += var_94
                        int32_t var_a8_6 = 0
                        lpNumberOfBytesRead = &var_94
                        int32_t var_b0_4 = 0x80
                        lpBuffer = &var_88
                        hFile = hObject
                    
                    CloseHandle(hObject)
                    lDistanceToMove += ebx_3
                    var_8c_1 += 1
                    
                    if (var_8c_1 u>= **(arg1 + 0x50))
                        goto label_462ff5_2
                
                result = 0x8876038f

sub_745f2b(__security_cookie_1)
return result
