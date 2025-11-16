// 函数: sub_412a93
// 地址: 0x412a93
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_3ac = edi
int32_t i = 0
int32_t ecx = *arg3
int32_t var_c = 0
int32_t var_8 = 0
int32_t result_1 = (*(ecx + 0x2c))(arg3, 0, 0, &var_c, 0x800)
int32_t result = result_1

if (result_1 s>= 0)
    int32_t result_2 = sub_40bed2(arg1, &var_8, 0x10)
    result = result_2
    
    if (result_2 s>= 0)
        if (sub_408829(arg2, arg1 + 0xc) == 0)
            void var_3a4
            sub_409105(&var_3a4, arg1 + 0xc, arg2)
            sub_408746(&var_3a4, var_8, var_c)
            
            if (*(arg1 + 0x23c) u> 0)
                do
                    sub_408771(&var_3a4, i, i, 1)
                    i += 1
                while (i u< *(arg1 + 0x23c))
        else
            int32_t ecx_3 = *(arg1 + 0x23c) * *(arg1 + 0x238)
            int32_t esi_3
            int32_t edi_2
            edi_2, esi_3 = __builtin_memcpy(var_c, var_8, ecx_3 u>> 2 << 2)
            __builtin_memcpy(edi_2, esi_3, ecx_3 & 3)

if (var_c != 0)
    (*(*arg3 + 0x30))(arg3)

if (var_8 != 0)
    int32_t* ebx_1 = *(arg1 + 0x234)
    (*(*ebx_1 + 0x30))(ebx_1)

return result
