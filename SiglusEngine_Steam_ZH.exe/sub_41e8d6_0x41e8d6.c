// 函数: sub_41e8d6
// 地址: 0x41e8d6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** var_8 = arg1
bool cond:0 = arg1[0x3d] == 0
*arg1 = &data_ab7934

if (not(cond:0))
    void* eax_1 = arg1[0x3e]
    
    if (eax_1 != 0)
        int32_t edi
        int32_t var_10_1 = edi
        int32_t i = arg1[0x35]
        void* var_8_1 = eax_1
        
        for (; i u< arg1[0x36]; i += 1)
            for (int32_t j = arg1[0x32]; j u< arg1[0x34]; j += 4)
                j__free(*(var_8_1 + 4))
                var_8_1 += 8

j__free(arg1[0x3c])
j__free(arg1[0x3e])
return sub_41da0c(arg1)
