// 函数: sub_5bf210
// 地址: 0x5bf210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8
int32_t* eax = sub_5bf440(&var_8, arg2)
void* result = *arg3
*arg3 = *eax
*eax = result
int32_t* esi_1 = var_8

if (esi_1 != 0)
    bool cond:0_1 = esi_1[1] != 1
    result = esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi_1 + 4))()
        result = &esi_1[2]
        int32_t edi_1 = *result
        *result -= 1
        
        if (edi_1 == 1)
            result = (*(*esi_1 + 8))()

int32_t var_1c_1 = arg2
int32_t var_20 = arg2
int32_t ecx
int32_t var_24 = ecx
return result
