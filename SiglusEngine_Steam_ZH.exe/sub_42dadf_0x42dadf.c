// 函数: sub_42dadf
// 地址: 0x42dadf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg1[0xf]

if (ecx != 0)
    sub_42bce9(ecx, 1)

void* ecx_1 = arg1[0x1a]

if (ecx_1 != 0)
    sub_42bcae(ecx_1, 1)

void* ecx_2 = arg1[0x9a]

if (ecx_2 != 0)
    sub_42b9e9(ecx_2, 1)

int32_t edi
int32_t var_c = edi
void* esi = &arg1[0x1b]
int32_t i_2 = 0x7f
int32_t i

do
    void* ecx_3 = *esi
    
    if (ecx_3 != 0)
        sub_42b93a(ecx_3, 1)
    
    esi += 4
    i = i_2
    i_2 -= 1
while (i != 1)
int16_t* eax = arg1[0xa7]

if (eax != 0)
    void* const edi_1 = &data_ab55ec
    int16_t* esi_1 = eax
    int32_t i_1 = 2
    bool cond:2_1 = true
    
    while (i_1 != 0)
        char temp1_1 = *esi_1
        char temp2_1 = *edi_1
        cond:2_1 = temp1_1 == temp2_1
        esi_1 += 1
        edi_1 += 1
        i_1 -= 1
        
        if (temp1_1 != temp2_1)
            break
    
    if (not(cond:2_1))
        sub_761a44(4, eax)

int32_t eax_1 = arg1[0xa7]

if (eax_1 != 0)
    _free(eax_1)

int32_t mxcsr
int16_t x87control
__controlfp(mxcsr, x87control, arg1[0xa8], 0xb001f)

if (arg1[0xa9] != 0)
    sub_42d09d(arg1)

sub_42a3eb(&arg1[6])
return sub_46b443(arg1) __tailcall
