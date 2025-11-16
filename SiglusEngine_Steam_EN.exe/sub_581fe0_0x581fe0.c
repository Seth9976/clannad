// 函数: sub_581fe0
// 地址: 0x581fe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg8
void* esi = arg6
int32_t edi = arg5
uint32_t i_5 = arg3
int32_t ecx = arg7

if (edi == 0xffffffff && esi == 0xffffffff && ecx == esi && eax == esi)
    edi = 0
    ecx = arg2 - 1
    esi = nullptr
    eax = arg4 - 1

int32_t var_24 = ecx
arg7 = ecx - edi + 1
arg8 = eax - esi + 1
uint32_t i_7 = i_5
arg6 = nullptr
arg5 = nullptr
void* eax_1 = sub_580e30(eax, arg2, i_7, arg4, edi, esi, ecx, eax, &arg6, &arg5)
uint32_t i_3 = arg8 * arg7
BOOL hMem = 0
BOOL var_c = 0
i_5 = i_3
BOOL eax_2 = sub_4d6960(eax_1, &var_c, &hMem, i_3, "EdgeRepTr")
void* edi_1 = var_c
char* ebx_3 = arg5 + 7
char* ecx_2 = ebx_3
void* edx_1 = edi_1
uint32_t i_6

if (i_3 s> 0)
    i_6 = i_3
    uint32_t i
    
    do
        eax_2.b = *ecx_2
        edx_1 += 1
        *(edx_1 - 1) = eax_2.b
        ecx_2 = &ecx_2[4]
        i = i_3
        i_3 -= 1
    while (i != 1)
    i_3 = i_5

i_6 = 0
var_c = 0
BOOL eax_3 = sub_4d6960(eax_2, &var_c, &i_6, i_3, "EdgeRepWorkTr")
BOOL esi_2 = var_c
sub_4d1c30(eax_3, edi_1, esi_2, i_3)
sub_581af0(
    sub_581af0(
        sub_581af0(sub_581af0(eax_3, arg7, &arg5[2], arg8, esi_2), arg7, &arg5[2], arg8, esi_2), 
        arg7, &arg5[2], arg8, esi_2), 
    arg7, &arg5[2], arg8, esi_2)
int32_t edx_9 = sub_4d6c40(&i_6, &var_c)
uint32_t i_2 = i_5

if (i_2 s> 0)
    char* ebx_4 = ebx_3
    uint32_t i_1
    
    do
        char eax_7 = *edi_1
        edi_1 += 1
        *ebx_4 = eax_7
        ebx_4 = &ebx_4[4]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

BOOL hMem_1 = hMem

if (hMem_1 != 0)
    uint32_t i_8 = data_1af413c
    i_5 = i_8
    
    if (i_8 == 0)
        goto label_582181
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    char eax_8
    eax_8, i_2, edx_9 = sub_4d6b80(&hMem)
    
    if (eax_8 != 0)
        hMem_1 = hMem
    label_582181:
        GlobalUnlock(hMem_1)
        i_2, edx_9 = GlobalFree(hMem)
        
        if (i_5 != 0)
            sub_4d6500()
            i_2, edx_9 = ReleaseSemaphore(data_7027a8, 1, nullptr)

char arg_8
bool cond:0 = arg_8 == 0
var_c = 0
hMem = 0
uint32_t i_4 = i_2
bool cond:1_1

if (cond:0)
    arg8 = sub_581880(&var_c, arg7, &arg5[2], arg8, arg9, arg10, &var_c, &hMem)
    HGLOBAL hMem_3 = arg6
    
    if (hMem_3 != 0)
        int32_t ecx_24 = data_1af413c
        arg_8.d = ecx_24
        
        if (ecx_24 == 0)
            goto label_5822f1
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (sub_4d6b80(&arg6) != 0)
            hMem_3 = arg6
        label_5822f1:
            GlobalUnlock(hMem_3)
            GlobalFree(arg6)
            cond:1_1 = arg_8.d == 0
        label_5822fc:
            
            if (not(cond:1_1))
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    arg_8.d = 0
    uint32_t* var_28_3 = &i_5
    i_5 = 0
    sub_580f10(&arg_8, edx_9, arg5, i_2, &arg_8)
    HGLOBAL hMem_2 = arg6
    
    if (hMem_2 != 0)
        int16_t* ecx_16 = data_1af413c
        arg5 = ecx_16
        
        if (ecx_16 == 0)
            goto label_58220c
        
        WaitForSingleObject(data_7027a8, 0xffffffff)
        
        if (sub_4d6b80(&arg6) != 0)
            hMem_2 = arg6
        label_58220c:
            GlobalUnlock(hMem_2)
            GlobalFree(arg6)
            
            if (arg5 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)
    
    int32_t var_24_5 = sub_5811e0(i_5)
    void* eax_12 = sub_581410(&var_c, arg7, i_5, arg8, arg9, arg10, &var_c, &hMem)
    HGLOBAL hMem_4 = arg_8.d
    arg8 = eax_12
    
    if (hMem_4 != 0)
        void* eax_13 = data_1af413c
        char eax_14
        
        if (eax_13 != 0)
            WaitForSingleObject(data_7027a8, 0xffffffff)
            eax_14 = sub_4d6b80(&arg_8)
        
        if (eax_13 == 0 || eax_14 != 0)
            GlobalUnlock(hMem_4)
            GlobalFree(hMem_4)
            cond:1_1 = eax_13 == 0
            goto label_5822fc
*arg11 = var_c
*arg12 = hMem
return arg8
