// 函数: sub_4c50b0
// 地址: 0x4c50b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_2 = result

if (arg1 s< 0x20)
    if (*(arg1 * 0x210 + &data_1bfffd0) != 0)
        result = sub_4d6c40(arg1 * 0x210 + &data_1bfffd0, arg1 * 0x210 + 0x1bfffd4)
        *(arg1 * 0x210 + &data_1bfffd0) = 0
        *(arg1 * 0x210 + 0x1bfffd4) = 0
        *(arg1 * 0x210 + &data_1bfffd8) = 0
    
    if (arg2 != 0)
        sub_4cfd70(arg1 * 0x210 + &data_1bfffd8, arg2)
        void fileName
        sub_4c36f0(&fileName, 0, arg2, 0xffffffff, &fileName)
        result = CreateFileA(&fileName, 0x80000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
            OPEN_EXISTING, 0x8000080, nullptr)
        
        if (result != 0xffffffff)
            uint32_t numberOfBytesRead
            uint32_t result_1
            sub_4d6960(ReadFile(result, &result_1, 4, &numberOfBytesRead, nullptr), 
                arg1 * 0x210 + 0x1bfffd4, arg1 * 0x210 + &data_1bfffd0, result_1, "P_A_C_K")
            ReadFile(result, *(arg1 * 0x210 + 0x1bfffd4), result_1, &numberOfBytesRead, nullptr)
            result = CloseHandle(result)
            void* esi_1 = *(arg1 * 0x210 + 0x1bfffd4)
            
            if (esi_1 != 0)
                result = *(esi_1 + 4)
                
                if (result s> 0)
                    int32_t i = 0
                    
                    if (result s> 0)
                        void* ecx_4 = esi_1 + 0x38
                        
                        do
                            result = result_1
                            ecx_4 += 0x3c
                            *(ecx_4 - 0x3c) += result
                            i += 1
                        while (i s< *(esi_1 + 4))

sub_5f02dd(result_2 ^ &__saved_ebp)
return result
