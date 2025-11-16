// 函数: sub_40fa91
// 地址: 0x40fa91
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t result_1 = arg1[2]
int32_t ecx = arg1[4]
void* edx = arg1[5]
arg1[3] = ecx
int32_t ecx_3 = *(*(edx + 0x250) + ((result_1 * 3 + ecx) << 2))
bool cond:0 = ecx_3 == *arg1
int32_t edi
int32_t var_10 = edi
int32_t result = result_1
arg1[2] = ecx_3

if (not(cond:0))
    int32_t i
    
    do
        if (arg1[2] != 0xffffffff)
            int32_t eax_13 = sub_40d636(*(arg1[5] + 0x250) + arg1[2] * 0xc, result_1)
            bool cond:1_1 = arg1[6].b == 0
            arg1[4] = eax_13
            int32_t eax_14
            
            if (cond:1_1)
                eax_14 = eax_13 + 2
            else
                eax_14 = eax_13 + 1
            
            arg1[4] = modu.dp.d(0:eax_14, 3)
            return result
        
        if (arg1[6].b == 0)
            return result
        
        if (*(arg1 + 0x19) != 0)
            return result
        
        int32_t eax = *arg1
        void* ecx_4 = arg1[5]
        int32_t var_14_1 = arg1[1]
        arg1[2] = eax
        arg1[6].b = 0
        uint32_t temp1_1 = modu.dp.d(0:(sub_40bf7c(*(ecx_4 + 0x24c) + eax * 0xc, var_14_1) + 2), 3)
        int32_t eax_8 = arg1[3] + 2
        arg1[4] = temp1_1
        arg1[3] = modu.dp.d(0:eax_8, 3)
        result_1 = arg1[2]
        i = *(*(arg1[5] + 0x250) + ((result_1 * 3 + arg1[4]) << 2))
        arg1[2] = i
    while (i != *arg1)

arg1[2] = 0xffffffff
return result
