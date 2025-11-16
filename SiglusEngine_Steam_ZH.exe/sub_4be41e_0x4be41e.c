// 函数: sub_4be41e
// 地址: 0x4be41e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
int32_t eax = 0
int32_t edi
int32_t var_34 = edi
void* var_8 = ebx
int32_t var_18[0x4]

if ((arg4 & 0x10000) != 0)
    var_18[0] = 0
    eax = 1

if ((arg4 & 0x20000) != 0)
    var_18[eax] = 1
    eax += 1

if ((arg4 & 0x40000) != 0)
    var_18[eax] = 2
    eax += 1

if ((arg4 & 0x80000) != 0)
    var_18[eax] = 3
    eax += 1

int32_t esi = arg3

if (esi u> eax)
    esi = eax

int32_t var_28 = 0xffffffff
void var_24
void* edi_1 = &var_24
*edi_1 = 0xffffffff
void* edi_2 = edi_1 + 4
*edi_2 = 0xffffffff
int32_t ecx = 0
*(edi_2 + 4) = 0xffffffff

if (esi u> 0)
    int32_t edx_1 = *(ebx + 0x14)
    
    do
        int32_t ebx_1 = var_18[ecx]
        int32_t edi_8 = *(*(edx_1 + (*(&var_18 + arg2 - &var_18 + (ecx << 2)) << 2)) + 0x10)
        ecx += 1
        (&var_28)[ebx_1] = edi_8
    while (ecx u< esi)
    
    ebx = var_8

int32_t* esi_3

if (zx.d((*(ebx + 0xc8)).w) != 0x104)
    esi_3 = &data_b596c8
    
    if (sub_4c16e2(&var_28, &data_b596c8) == 0)
        esi_3 = &data_b596d8
        
        if (sub_4c16e2(&var_28, &data_b596d8) == 0 && sub_4c16e2(&var_28, &data_b596b8) != 0
                && (arg4 & 0xf0000) == 0x80000)
            esi_3 = &data_b596b8
else
    int32_t esi_1 = 0
    int32_t ebx_2 = 0xb59698
    
    while (true)
        if (sub_4c16e2(&var_28, ebx_2) != 0)
            int32_t esi_2 = esi_1 << 4
            esi_3 = esi_2 + 0xb59698
            
            if (esi_2 != 0xff4a6968)
                break
        else
            esi_1 += 1
            ebx_2 += 0x10
            
            if (esi_1 u< 5)
                continue
        
        sub_4a4100(var_8, *(*(var_8 + 0x100) + 0x3c), 0x11b5, "cannot map swizzle to ps_1_4")
        return 0x80004005

int32_t edx_2 = 0
int32_t i = 0x10
int32_t* eax_13 = esi_3

do
    int32_t esi_5 = *eax_13 << i.b
    eax_13 = &eax_13[1]
    edx_2 |= esi_5
    i += 2
while (i u< 0x18)

*arg5 = edx_2
return 0
