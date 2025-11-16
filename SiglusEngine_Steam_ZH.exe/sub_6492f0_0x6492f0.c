// 函数: sub_6492f0
// 地址: 0x6492f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg3
int32_t* var_30 = ebx

if (arg2 s<= 0 || arg4 s<= 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

ebx[3] = arg2
ebx[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t eax_7 = *ebx
int32_t* var_18 = nullptr

if (eax_7 == ebx[1])
    eax_7 = 0

int32_t* var_48 = nullptr
int32_t eax_9
int32_t edx
edx:eax_9 = sx.q(arg2)
int32_t var_44 = 0
int32_t var_40 = 0
int32_t esi_2 = (eax_9 - edx) s>> 1
int32_t eax_13
int32_t edx_1
edx_1:eax_13 = sx.q(arg2 + 1)
int32_t eax_15 = (eax_13 - edx_1) s>> 1
int32_t eax_17
int32_t edx_2
edx_2:eax_17 = sx.q(arg4)
int32_t eax_19 = (eax_17 - edx_2) s>> 1
int32_t eax_21
int32_t edx_3
edx_3:eax_21 = sx.q(arg4 + 1)
int32_t eax_23 = (eax_21 - edx_3) s>> 1
int32_t var_8_1 = 0
int32_t var_3c
int32_t var_38
int32_t* eax_25

if (esi_2 s> 0)
    var_3c = esi_2
    var_38 = 1
    sub_5979b0(&var_48, esi_2 << 2)
    eax_25 = var_48
    int32_t* ecx_1 = eax_25
    var_18 = eax_25
    
    if (eax_25 == var_44)
        ecx_1 = nullptr
    
    int32_t edi_2 = 0
    int32_t* var_34_1 = ecx_1
    
    if (esi_2 s> 0)
        do
            int32_t eax_26 = edi_2
            int32_t edx_4
            
            if (esi_2 != 1)
                if (esi_2 - 1 s<= 0)
                    if (esi_2 - 1 s< 0)
                        if (edi_2 s< esi_2 - 1)
                            eax_26 = esi_2 - 1
                        else if (edi_2 s> 0)
                            eax_26 = 0
                else if (edi_2 s< 0)
                    eax_26 = 0
                else if (edi_2 s> esi_2 - 1)
                    eax_26 = esi_2 - 1
                
                edx_4 = divs.dp.d(sx.q(eax_26 * 0xff), esi_2 - 1)
            else
                edx_4 = 0xff
            
            if (arg5 == 0)
                edx_4 = 0xff - edx_4
                ecx_1 = var_34_1
            
            edi_2 += 1
            *ecx_1 = ((edx_4 << 8 | edx_4) << 8 | edx_4) << 8 | edx_4
            ecx_1 = &ecx_1[1]
            var_34_1 = ecx_1
        while (edi_2 s< esi_2)
        
        ebx = var_30
        eax_25 = var_18

if (esi_2 s<= 0 || eax_25 == var_44)
    eax_25 = nullptr

int32_t edi_4 = var_38
int32_t esi_4 = 0
int32_t* var_34_2 = eax_25

if (eax_19 s> 0)
    do
        sub_6c97b0(eax_25, ebx[3], eax_7, ebx[4], eax_25, var_3c, edi_4, 0, esi_4)
        eax_25 = var_34_2
        esi_4 += 1
    while (esi_4 s< eax_19)

int32_t* edx_7

if (eax_15 s<= 0)
    edx_7 = var_18
else
    var_3c = eax_15
    var_38 = 1
    sub_5979b0(&var_48, eax_15 << 2)
    edx_7 = var_48
    int32_t* ecx_5 = edx_7
    
    if (edx_7 == var_44)
        ecx_5 = nullptr
    
    int32_t* var_34_3 = ecx_5
    int32_t edi_3 = 0
    
    if (eax_15 s<= 0)
        edi_4 = var_38
    else
        do
            int32_t eax_38 = edi_3
            int32_t edx_8
            
            if (eax_15 != 1)
                if (eax_15 - 1 s<= 0)
                    if (eax_15 - 1 s< 0)
                        if (edi_3 s< eax_15 - 1)
                            eax_38 = eax_15 - 1
                        else if (edi_3 s> 0)
                            eax_38 = 0
                else if (edi_3 s< 0)
                    eax_38 = 0
                else if (edi_3 s> eax_15 - 1)
                    eax_38 = eax_15 - 1
                
                edx_8 = divs.dp.d(sx.q(eax_38 * 0xff), eax_15 - 1)
            else
                edx_8 = 0xff
            
            if (arg5 != 0)
                edx_8 = 0xff - edx_8
                ecx_5 = var_34_3
            
            edi_3 += 1
            *ecx_5 = ((edx_8 << 8 | edx_8) << 8 | edx_8) << 8 | edx_8
            ecx_5 = &ecx_5[1]
            var_34_3 = ecx_5
        while (edi_3 s< eax_15)
        
        edi_4 = var_38
        ebx = var_30
        edx_7 = edx_7

int32_t eax_51 = 0

if (edx_7 == var_44)
    edx_7 = nullptr

int32_t esi_7 = 0
int32_t* var_18_1 = edx_7

if (eax_23 s> 0)
    do
        int32_t eax_50 = eax_19 + esi_7
        eax_51 = sub_6c97b0(eax_50, ebx[3], eax_7, ebx[4], edx_7, var_3c, edi_4, esi_2, eax_50)
        edx_7 = var_18_1
        esi_7 += 1
    while (esi_7 s< eax_23)

sub_647500(eax_51, 1, &var_48, eax_19, arg5, 0)
int32_t* eax_52 = var_48
int32_t edi_5 = var_38
int32_t* ecx_9 = eax_52

if (eax_52 == var_44)
    ecx_9 = nullptr

int32_t esi_8 = 0
int32_t* var_34_4 = ecx_9

if (eax_15 s> 0)
    do
        int32_t eax_54 = esi_2 + esi_8
        sub_6c97b0(eax_54, ebx[3], eax_7, ebx[4], ecx_9, var_3c, edi_5, eax_54, 0)
        ecx_9 = var_34_4
        esi_8 += 1
    while (esi_8 s< eax_15)

if (eax_23 s> 0)
    var_3c = 1
    sub_5979b0(&var_48, eax_23 << 2)
    int32_t* eax_56 = var_48
    int32_t* ecx_12 = eax_56
    
    if (eax_56 == var_44)
        ecx_12 = nullptr
    
    int32_t* var_34_5 = ecx_12
    int32_t edi_6 = 0
    
    if (eax_23 s> 0)
        ebx.b = arg5 == 0
        
        do
            int32_t eax_57 = edi_6
            int32_t edx_12
            
            if (eax_23 != 1)
                if (eax_23 - 1 s<= 0)
                    if (eax_23 - 1 s< 0)
                        if (edi_6 s< eax_23 - 1)
                            eax_57 = eax_23 - 1
                        else if (edi_6 s> 0)
                            eax_57 = 0
                else if (edi_6 s< 0)
                    eax_57 = 0
                else if (edi_6 s> eax_23 - 1)
                    eax_57 = eax_23 - 1
                
                edx_12 = divs.dp.d(sx.q(eax_57 * 0xff), eax_23 - 1)
            else
                edx_12 = 0xff
            
            if (ebx.b == 0)
                edx_12 = 0xff - edx_12
                ecx_12 = var_34_5
            
            edi_6 += 1
            *ecx_12 = ((edx_12 << 8 | edx_12) << 8 | edx_12) << 8 | edx_12
            ecx_12 = &ecx_12[1]
            var_34_5 = ecx_12
        while (edi_6 s< eax_23)
        
        ebx = var_30
    
    edi_5 = eax_23

int32_t* ecx_15 = var_48
int32_t* eax_68 = ecx_15

if (ecx_15 == var_44)
    eax_68 = nullptr

int32_t esi_11 = 0
int32_t* var_34_6 = eax_68

if (esi_2 s> 0)
    do
        sub_6c97b0(eax_68, ebx[3], eax_7, ebx[4], eax_68, var_3c, edi_5, esi_11, eax_19)
        eax_68 = var_34_6
        esi_11 += 1
    while (esi_11 s< esi_2)
    
    ecx_15 = var_48

if (ecx_15 != 0)
    j__free(ecx_15)

eax_68.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_68
