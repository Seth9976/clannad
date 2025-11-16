// 函数: sub_4d9d51
// 地址: 0x4d9d51
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t ecx = arg1[4]
int32_t edx = arg1[1]
int32_t edi
int32_t var_20 = edi
int32_t edi_1 = *arg1
void* entry_ebx
*(entry_ebx + 0x48) = 0
int32_t eax = 0
int32_t var_8 = edx
int32_t var_10 = ecx
*(entry_ebx + 0x4c) = 0x23d

if (ecx s> 0)
    do
        if (*(edi_1 + (eax << 2)) == 0)
            *(edi_1 + (eax << 2) + 2) = 0
        else
            *(entry_ebx + 0x48) += 1
            *(entry_ebx + (*(entry_ebx + 0x48) << 2) + 0x1054) = eax
            edx = var_8
            var_c = eax
            *(eax + entry_ebx + 0x1948) = 0
        
        eax += 1
    while (eax s< ecx)

while (*(entry_ebx + 0x48) s< 2)
    int32_t eax_1
    
    if (var_c s>= 2)
        eax_1 = 0
    else
        var_c += 1
        eax_1 = var_c
    
    *(entry_ebx + 0x48) += 1
    *(entry_ebx + (*(entry_ebx + 0x48) << 2) + 0x1054) = eax_1
    int32_t ecx_3 = eax_1 << 2
    *(ecx_3 + edi_1) = 1
    *(entry_ebx + eax_1 + 0x1948) = 0
    *(entry_ebx + 0x58) -= 1
    
    if (edx != 0)
        *(entry_ebx + 0x5c) -= zx.d(*(ecx_3 + edx + 2))

arg1[6] = var_c
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(*(entry_ebx + 0x48))

for (int32_t i = (eax_5 - edx_2) s>> 1; i s>= 1; i -= 1)
    sub_4d9a8a(entry_ebx, edi_1, i)

do
    int32_t eax_8 = *(entry_ebx + 0x48)
    int32_t ecx_4 = *(entry_ebx + (eax_8 << 2) + 0x1054)
    int32_t esi_2 = *(entry_ebx + 0x1058)
    *(entry_ebx + 0x48) = eax_8 - 1
    *(entry_ebx + 0x1058) = ecx_4
    sub_4d9a8a(entry_ebx, edi_1, 1)
    *(entry_ebx + 0x4c) -= 1
    int32_t eax_11 = *(entry_ebx + 0x1058)
    *(entry_ebx + (*(entry_ebx + 0x4c) << 2) + 0x1054) = esi_2
    *(entry_ebx + 0x4c) -= 1
    *(entry_ebx + (*(entry_ebx + 0x4c) << 2) + 0x1054) = eax_11
    int16_t* ecx_7 = edi_1 + (eax_11 << 2)
    int16_t* var_14_1 = ecx_7
    ecx_7.w = *ecx_7
    int16_t* edx_3 = edi_1 + (esi_2 << 2)
    ecx_7.w += *edx_3
    int16_t* var_18_1 = edx_3
    edx_3.w = ecx_7.w
    *(edi_1 + (var_10 << 2)) = edx_3.w
    edx_3.b = *(entry_ebx + esi_2 + 0x1948)
    eax_11.b = *(entry_ebx + eax_11 + 0x1948)
    char eax_12
    
    if (edx_3.b u< eax_11.b)
        eax_12 = eax_11.b
    else
        eax_12 = edx_3.b
    
    *(entry_ebx + var_10 + 0x1948) = eax_12 + 1
    var_14_1[1] = var_10.w
    var_18_1[1] = var_10.w
    *(entry_ebx + 0x1058) = var_10
    var_10 += 1
    sub_4d9a8a(entry_ebx, edi_1, 1)
while (*(entry_ebx + 0x48) s>= 2)

*(entry_ebx + 0x4c) -= 1
*(entry_ebx + (*(entry_ebx + 0x4c) << 2) + 0x1054) = *(entry_ebx + 0x1058)
sub_4d9b34(arg1, entry_ebx)
return sub_4d9cda(edi_1, entry_ebx, var_c)
