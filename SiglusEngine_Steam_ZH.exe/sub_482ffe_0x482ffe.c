// 函数: sub_482ffe
// 地址: 0x482ffe
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
uint8_t* lpBuffer_1 = arg1[3]
char var_2c = 0
uint32_t fileSizeHigh
uint32_t buffer_2 = GetFileSize(arg2, &fileSizeHigh)
uint32_t fileSizeHigh_1 = fileSizeHigh
uint32_t buffer_3 = buffer_2
int32_t result

if (fileSizeHigh_1 s< 0 || (fileSizeHigh_1 s<= 0 && buffer_2 u<= 0xffffffff))
    uint32_t buffer = buffer_2
    uint32_t var_1c
    uint8_t buffer_1
    
    if (ReadFile(arg2, &buffer_1, 0x10, &var_1c, nullptr) == 0)
        result = 0x8876038f
    else if (var_1c == 0x10)
        int32_t edi
        int32_t var_4c_1 = edi
        int16_t var_f_1 = 0x697a
        void var_d
        var_d.b = data_ac79c6.b
        uint32_t numberOfBytesWritten
        
        if (WriteFile(arg3, &buffer_1, 0x10, &numberOfBytesWritten, nullptr) != 0
                && WriteFile(arg3, &buffer, 4, &numberOfBytesWritten, nullptr) != 0)
            int32_t var_50_2 = 0
            uint32_t* lpNumberOfBytesRead = &var_1c
            int32_t var_58_2 = 0x8000
            uint8_t* lpBuffer = lpBuffer_1
            
            while (true)
                if (ReadFile(arg2, lpBuffer, 0x8000, lpNumberOfBytesRead, nullptr) == 0)
                    break
                
                if (var_1c == 0)
                    result = 0
                    goto label_483179
                
                uint32_t var_28
                OVERLAPPED* lpOverlapped = sub_4dab98(*arg1, arg1[3], var_1c, arg1[4], 0x8008, 
                    arg1[5], arg1[6], arg1[7], arg1[8], var_2c, &var_28)
                
                if (lpOverlapped == 0)
                    if (WriteFile(arg3, &var_1c, 2, &numberOfBytesWritten, lpOverlapped) == 0)
                        break
                    
                    if (WriteFile(arg3, &var_28, 2, &numberOfBytesWritten, nullptr) == 0)
                        break
                    
                    if (WriteFile(arg3, arg1[4], var_28, &numberOfBytesWritten, nullptr) == 0)
                        break
                    
                    if (numberOfBytesWritten == var_28)
                        int32_t var_50_5 = 0
                        lpNumberOfBytesRead = &var_1c
                        int32_t var_58_5 = 0x8000
                        var_2c = 1
                        lpBuffer = arg1[3] + 0x8000
                        continue
                
                result = 0x8007000e
                goto label_483179
        
        result = 0x8876038f
    else
        result = 0xe
else
    result = 0xe

label_483179:
sub_745f2b(__security_cookie_1)
return result
