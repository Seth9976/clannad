// 函数: sub_470100
// 地址: 0x470100
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg5
void* edx = arg4
int32_t eax = *edi
int32_t* esi = edi[1]
int32_t* ecx = esi
char* i = nullptr
arg5 = ecx
char* i_1 = nullptr

if (*(edx + 0x10) s<= 0)
    edi[1] = esi
    *edi = eax
    return eax

do
    i.b = *(i + edx)
    uint32_t var_8_1
    
    if (i.b != 0xff)
        bool cond:0_1 = edi[0x13] == 0
        uint32_t eax_1 = zx.d(i.b)
        var_8_1 = eax_1
        edi[1] = ecx
        *edi = eax_1
        
        if (not(cond:0_1) && edi[0x12].b != 0 && arg3 u<= 0x1ff)
            void* eax_2 = sub_425430(arg3, 1)
            
            if (*(arg3 * 0x74 + 0x13747b0) != 0)
                sub_424660(eax_2, edi, arg3 * 0x74 + 0x13747b0, 0, 0xffffffff, 0, 0)
            
            edx = arg4
            ecx = arg5
    else
        var_8_1 = 0
    
    int32_t esi_1 = *(arg2 + 0x14)
    
    if (esi_1 == 0x1869f)
        esi_1 = 0
    else if (esi_1 == 0)
        esi_1 = 0xffffffff
        int32_t var_c = 0xffffffff
        
        if (arg3 u<= 0x1ff)
            sub_425430(arg3, 1)
            
            if (*(arg3 * 0x74 + 0x13747b0) != 0)
                void var_20
                sub_426840(&var_c, var_8_1, arg3 * 0x74 + 0x13747b0, &var_c, &var_20)
                esi_1 = var_c
            
            edx = arg4
            ecx = arg5
    
    ecx += esi_1
    i = &i_1[1]
    arg5 = ecx
    i_1 = i
while (i s< *(edx + 0x10))

*edi = eax
edi[1] = esi
return esi
