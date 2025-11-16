// 函数: sub_712da0
// 地址: 0x712da0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t edi = arg2
int32_t var_8_1 = arg3
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi - 1)
int32_t ebx_1 = (eax_1 - edx) s>> 1

if (arg4 s< edi)
    do
        void* esi_2 = ebx_1 * 0x68 + arg3
        
        if (arg6(esi_2, arg5) == 0)
            break
        
        void* edi_2 = edi * 0x68 + var_8_1
        
        if (edi_2 + 4 != esi_2 + 4)
            sub_541b40(edi_2 + 4, esi_2 + 4, 0, 0xffffffff)
        
        if (edi_2 + 0x1c != esi_2 + 0x1c)
            sub_541b40(edi_2 + 0x1c, esi_2 + 0x1c, 0, 0xffffffff)
        
        if (edi_2 + 0x34 != esi_2 + 0x34)
            sub_541b40(edi_2 + 0x34, esi_2 + 0x34, 0, 0xffffffff)
        
        if (edi_2 + 0x4c != esi_2 + 0x4c)
            sub_541b40(edi_2 + 0x4c, esi_2 + 0x4c, 0, 0xffffffff)
        
        arg3 = var_8_1
        *(edi_2 + 0x64) = *(esi_2 + 0x64)
        int32_t eax_10
        int32_t edx_1
        edx_1:eax_10 = sx.q(ebx_1 - 1)
        edi = ebx_1
        ebx_1 = (eax_10 - edx_1) s>> 1
    while (arg4 s< edi)
    
    arg3 = var_8_1

void* esi_4 = edi * 0x68 + arg3

if (esi_4 + 4 != arg5 + 4)
    sub_541b40(esi_4 + 4, arg5 + 4, 0, 0xffffffff)

if (esi_4 + 0x1c != arg5 + 0x1c)
    sub_541b40(esi_4 + 0x1c, arg5 + 0x1c, 0, 0xffffffff)

if (esi_4 + 0x34 != arg5 + 0x34)
    sub_541b40(esi_4 + 0x34, arg5 + 0x34, 0, 0xffffffff)

if (esi_4 + 0x4c != arg5 + 0x4c)
    sub_541b40(esi_4 + 0x4c, arg5 + 0x4c, 0, 0xffffffff)

int32_t result = *(arg5 + 0x64)
*(esi_4 + 0x64) = result
return result
