// 函数: sub_613140
// 地址: 0x613140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_8_1 = ecx
int32_t* result = *arg1

if (*result != 0 && result[1].b != 0)
    sub_530ba0(arg2, arg1)

int32_t i_1 = (arg1[2] - arg1[1]) s>> 4

if (i_1 s> 0)
    if ((*arg1)[0x4b] == 0)
        void* edx_1 = arg1[2]
        int32_t* ecx_2 = arg1[1]
        
        if (ecx_2 != edx_1)
            sub_613530(ecx_2, edx_1)
    
    if (i_1 s> 0)
        int32_t edi_1 = 0
        int32_t i
        
        do
            sub_613140(arg1[1] + edi_1, arg2)
            edi_1 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)

result.b = 1
return result
