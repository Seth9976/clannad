// 函数: sub_4a4530
// 地址: 0x4a4530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result = arg1
void* result_1 = result

if (data_702fc0 != 0 && (result == 0xc || result == 0x12))
    int32_t i_1 = (&data_63ecb0)[result]
    
    if (i_1 s> 0)
        char* result_2
        void* result_3
        void* result_4
        
        if (result == 0xc)
            result_3 = &data_1390760
            result_4 = &data_1353040
            result_2 = 0x2710
        else if (result != 0x12)
            result_4 = result_1
            result_3 = result_1
            result_2 = result_1
        else
            result_3 = &data_187a5d0
            result_4 = &data_1354f80
            result_2 = 0x2710
        
        int32_t edi_1 = 0
        void* eax = result_3 - result_4
        void* var_c_1 = eax
        int32_t i
        
        do
            if (*(eax + result_4) == 0)
                edi_1 += 1
            else
                edi_1 += sub_4cfc80(*result_4)
                eax = var_c_1
            
            result_4 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = result_2
        
        if (edi_1 s>= result)
            return sub_4a41c0(result, result, result_1, edi_1)

return result
