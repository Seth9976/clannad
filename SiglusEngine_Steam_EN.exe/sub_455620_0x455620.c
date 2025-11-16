// 函数: sub_455620
// 地址: 0x455620
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg6
int32_t ebx = arg2
int32_t var_20 = ebx
BOOL var_c = 0
HGLOBAL hMem_3 = nullptr
int32_t edi_1

if (esi s> arg8)
    edi_1 = esi - arg8
else
    edi_1 = arg8 - esi

BOOL eax_2 =
    sub_4d6960(((edi_1 + 1) << 3) + 1, &var_c, &hMem_3, ((edi_1 + 1) << 3) + 1, "line_buf_1")
int32_t* esi_1 = var_c
sub_58cc10(eax_2, edi_1 + 1, esi_1, arg5, esi, arg7, arg8, 0)
int32_t* var_8 = nullptr
HGLOBAL hMem_2 = nullptr
int32_t eax_4

if (arg10 s> arg12)
    eax_4 = arg10 - arg12
else
    eax_4 = arg12 - arg10

sub_58cc10(
    sub_4d6960(((eax_4 + 1) << 3) + 1, &var_8, &hMem_2, ((eax_4 + 1) << 3) + 1, "line_buf_2"), 
    eax_4 + 1, var_8, arg9, arg10, arg11, arg12, 0)
int32_t i_2 = eax_4 + 1
int32_t* ecx_5 = esi_1

if (edi_1 + 1 s<= i_2)
    i_2 = edi_1 + 1

int32_t edx_5 = 0
int32_t i_1 = i_2
int32_t* edi_4

if (i_2 s<= 0)
label_45572f:
    sub_4d6c40(&hMem_3, &var_c)
    BOOL eax_12 =
        sub_4d6960(((edi_1 + 1) << 3) + 1, &var_c, &hMem_3, ((edi_1 + 1) << 3) + 1, "line_buf_1")
    edi_4 = var_c
    sub_58cc10(eax_12, edi_1 + 1, edi_4, arg5, arg6, arg7, arg8, 1)
    esi_1 = var_8
else
    int32_t* ebx_2 = var_8 - esi_1
    
    while (true)
        ebx = var_20
        
        if (*ecx_5 s> *(ebx_2 + ecx_5))
            goto label_45572f
        
        ebx = var_20
        
        if (*ecx_5 s< *(ebx_2 + ecx_5))
            BOOL eax_22 = sub_4d6960(sub_4d6c40(&hMem_2, &var_8), &var_8, &hMem_2, 
                ((eax_4 + 1) << 3) + 1, "line_buf_2")
            edi_4 = var_8
            sub_58cc10(eax_22, eax_4 + 1, edi_4, arg9, arg10, arg11, arg12, 1)
            break
        
        edx_5 += 1
        ecx_5 = &ecx_5[2]
        
        if (edx_5 s>= i_1)
            goto label_45572f

uint32_t eax_14 = zx.d(arg13)
uint32_t ecx_15 = ((eax_14 << 8 | eax_14) << 8 | eax_14) << 8 | eax_14

if (i_1 s> 0)
    int32_t* edi_5 = edi_4 - esi_1
    arg6 = edi_5
    int32_t i
    
    do
        int32_t edx_9 = *esi_1
        int32_t eax_15 = esi_1[1]
        int32_t ecx_16 = *(edi_5 + esi_1)
        
        if (edx_9 s< ebx && ecx_16 s>= 0 && eax_15 s>= 0 && eax_15 s< arg4)
            if (edx_9 s< 0)
                edx_9 = 0
            
            if (ecx_16 s>= ebx)
                ecx_16 = ebx - 1
            
            int32_t edi_6 = eax_15 * ebx + edx_9 + arg3
            uint32_t ecx_20 = (ecx_16 - edx_9 + 1) u>> 2
            int32_t ecx_21
            
            if (ecx_20 != 0)
                edi_6, ecx_21 = __memfill_u32(edi_6, ecx_15, ecx_20)
            int32_t ebx_7 = (ecx_16 - edx_9 + 1) & 3
            int32_t ecx_23
            int32_t edi_7
            
            if (ebx_7 != 0)
                edi_7, ecx_23 = __memfill_u8(edi_6, ecx_15.b, ebx_7)
            ebx = var_20
            edi_5 = arg6
        
        esi_1 = &esi_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

HGLOBAL hMem = hMem_3
char result = (WaitForSingleObject).b

if (hMem != 0)
    int32_t ebx_8 = data_1af413c
    char eax_20
    
    if (ebx_8 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_20 = sub_4d6b80(&hMem_3)
    
    if (ebx_8 == 0 || eax_20 != 0)
        GlobalUnlock(hMem)
        GlobalFree(hMem)
        
        if (ebx_8 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
    
    result = (WaitForSingleObject).b

HGLOBAL hMem_1 = hMem_2

if (hMem_1 != 0)
    int32_t ebx_9 = data_1af413c
    
    if (ebx_9 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        result = sub_4d6b80(&hMem_2)
    
    if (ebx_9 == 0 || result != 0)
        GlobalUnlock(hMem_1)
        result = GlobalFree(hMem_1)
        
        if (ebx_9 != 0)
            sub_4d6500()
            return ReleaseSemaphore(data_7027a8, 1, nullptr)

return result
