// 函数: sub_606ce0
// 地址: 0x606ce0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* edi = arg2
char* ebx = arg3
void* i

for (i = edi - ebx; i s> 0x20; i = edi - ebx)
    if (arg4 s<= 0)
        if (i s<= 0x20)
            break
        
        void* eax_10 = edi - ebx
        
        if (eax_10 s> 1)
            int32_t var_28_1 = arg5
            eax_10 = sub_607860(ebx, edi)
        
        sub_607900(eax_10, edi, ebx, arg5)
        return 
    
    char* var_c
    sub_6071e0(arg1, ebx, &var_c, edi, arg5)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(arg4)
    int32_t esi_2 = (eax_1 - edx_1) s>> 1
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(esi_2)
    int32_t esi_3 = esi_2 + ((eax_4 - edx_2) s>> 1)
    arg4 = esi_3
    char* var_8
    
    if (var_c - ebx s>= edi - var_8)
        arg1, arg3 = sub_606ce0(esi_3, arg5)
        edi = var_c
    else
        arg1 = sub_606ce0(esi_3, arg5)
        arg3 = var_8
        ebx = arg3

if (i s<= 1)
    return 

char* var_20_3 = arg3
int32_t var_24_3 = arg5
sub_607950(ebx, edi)
