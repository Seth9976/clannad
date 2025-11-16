// 函数: sub_6447a0
// 地址: 0x6447a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3718
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s<= 0 || arg4 s<= 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t eax_4 = arg3[3]
char* var_40 = nullptr
int32_t var_3c = 0
int32_t var_38 = 0
int32_t ecx_1 = arg3[4]
int32_t edx_3 = *arg3

if (edx_3 == arg3[1])
    edx_3 = 0

int32_t j_3 = divs.dp.d(sx.q(eax_4 - 1 + arg5), arg5)
int32_t i_5 = divs.dp.d(sx.q(arg6 - 1 + ecx_1), arg6)
int32_t i_3 = i_5
int32_t eax_13 = i_5 * j_3
int32_t i_4 = i_3
int32_t var_8_1 = 0
sub_5979b0(&var_40, eax_13)
char* edx_7 = var_40
char* edi = edx_7

if (edx_7 == var_3c)
    edi = nullptr

int32_t esi_2 = 0

if (eax_13 s> 0)
    do
        int32_t eax_16 = esi_2
        char eax_15
        
        if (eax_13 != 1)
            if (eax_13 - 1 s<= 0)
                if (eax_13 - 1 s< 0)
                    if (esi_2 s< eax_13 - 1)
                        eax_16 = eax_13 - 1
                    else if (esi_2 s> 0)
                        eax_16 = 0
            else if (esi_2 s< 0)
                eax_16 = 0
            else if (esi_2 s> eax_13 - 1)
                eax_16 = eax_13 - 1
            
            eax_15 = (divs.dp.d(sx.q(eax_16 * 0xff), eax_13 - 1)).b
        else
            eax_15 = -1
        
        *edi = eax_15
        esi_2 += 1
        edi = &edi[1]
    while (esi_2 s< eax_13)
    
    i_3 = i_4
    edx_7 = var_40

int32_t ecx_4 = 0x20
void var_11
void* var_4c = &var_11
uint32_t i

for (i = 0xffffffff; i u> 0x7fff; )
    i u>>= 1
    ecx_4 -= 1

uint32_t i_2 = i
int32_t var_48 = ecx_4
char* edi_1

if (edx_7 == var_3c)
    edi_1 = nullptr
else
    edi_1 = var_40
    int32_t var_60_2 = ecx_4
    sub_6452d0(var_3c, var_3c, edi_1, &var_4c)

int32_t ecx_6 = 0
int32_t var_18_1 = 0

if (i_3 s> 0)
    int32_t j_2 = j_3
    int32_t edx_11 = arg6
    char* edi_2 = edi_1
    int32_t i_1
    
    do
        uint32_t esi_3 = 0
        
        if (j_2 s> 0)
            int32_t j_1 = j_2
            int32_t edx_13 = edx_11 - 1 + ecx_6
            int32_t var_34_1 = edx_13
            int32_t j
            
            do
                int32_t var_60_3 = ecx_1 - 1
                int32_t var_64_2 = eax_4 - 1
                int32_t var_68_1 = 0
                int32_t var_6c_1 = 0
                sub_64d0a0(arg3, arg3[3], edx_3, arg3[4], esi_3, ecx_6, arg5 - 1 + esi_3, edx_13, 
                    *edi_2, 0)
                esi_3 += arg5
                ecx_6 = var_18_1
                edi_2 = &edi_2[1]
                edx_13 = var_34_1
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_3 = i_4
            j_2 = j_3
            edx_11 = arg6
        
        ecx_6 += edx_11
        i_1 = i_3
        i_3 -= 1
        var_18_1 = ecx_6
        i_4 = i_3
    while (i_1 != 1)

char* eax_25 = var_40

if (eax_25 != 0)
    j__free(eax_25)

eax_25.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_25
