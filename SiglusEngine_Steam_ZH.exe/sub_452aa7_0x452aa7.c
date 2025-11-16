// 函数: sub_452aa7
// 地址: 0x452aa7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg1[0x37]
int32_t edi
int32_t var_c = edi
*arg1 = &data_ac3370

if (ecx != 0)
    sub_443284(ecx, 1)
    arg1[0x37] = 0

if (arg1[0x36] != 0)
    int32_t i = 0
    
    if (arg1[0x34] u> 0)
        do
            int32_t* ecx_1 = arg1[0x36][i]
            
            if (ecx_1 != 0)
                sub_44ce0e(ecx_1, 1)
                arg1[0x36][i] = 0
            
            i += 1
        while (i u< arg1[0x34])

sub_4433cc(arg1)
j__free(arg1[0x2f])
int32_t i_1 = 0

if (arg1[0x48] u> 0)
    do
        int32_t eax_4 = arg1[0x47][i_1]
        
        if (eax_4 != 0)
            j__free(eax_4)
            arg1[0x47][i_1] = 0
        
        i_1 += 1
    while (i_1 u< arg1[0x48])

int32_t eax_6 = arg1[0x47]

if (eax_6 != 0)
    j__free(eax_6)
    arg1[0x47] = 0

int32_t eax_7 = arg1[0x36]

if (eax_7 != 0)
    j__free(eax_7)
    arg1[0x36] = 0

int32_t* ecx_7 = arg1[0xb]

if (ecx_7 != 0)
    sub_452190(ecx_7, 3)
    arg1[0xb] = 0

int32_t eax_8 = arg1[0x31]

if (eax_8 != 0)
    j__free(eax_8)
    arg1[0x31] = 0

int32_t* ecx_9 = arg1[0x27]

if (ecx_9 != 0)
    sub_44ce2f(ecx_9, 3)
    arg1[0x27] = 0

int32_t* ecx_10 = arg1[0x29]

if (ecx_10 != 0)
    sub_4521de(ecx_10, 3)
    arg1[0x29] = 0

int32_t* ecx_11 = arg1[6]

if (ecx_11 != 0)
    sub_449097(ecx_11, 3)
    arg1[6] = 0

int32_t eax_9 = arg1[8]

if (eax_9 != 0)
    j__free(eax_9)
    arg1[8] = 0

int32_t eax_10 = arg1[0x2c]

if (eax_10 != 0)
    j__free(eax_10)
    arg1[0x2c] = 0

int32_t eax_11 = arg1[0x33]

if (eax_11 != 0)
    j__free(eax_11)
    arg1[0x33] = 0

int32_t* eax_12 = arg1[0x40]

if (eax_12 != 0)
    (*(*eax_12 + 8))(eax_12)
    arg1[0x40] = 0

int32_t* eax_13 = arg1[0x41]

if (eax_13 != 0)
    (*(*eax_13 + 8))(eax_13)
    arg1[0x41] = 0

int32_t* eax_14 = arg1[0xa]

if (eax_14 != 0)
    (*(*eax_14 + 8))(eax_14)
    arg1[0xa] = 0

int32_t* eax_15 = arg1[0xe]

if (eax_15 != 0)
    (*(*eax_15 + 8))(eax_15)
    arg1[0xe] = 0

j__free(arg1[0x42])
sub_44bc13(&arg1[0x38])
sub_44cb6a(&arg1[0x12])
return sub_4460db(&arg1[1]) __tailcall
