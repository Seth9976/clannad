// 函数: sub_649ae0
// 地址: 0x649ae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c38a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_6c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg3
int32_t* var_28 = esi

if (arg2 s<= 0 || arg4 s<= 0)
    int32_t eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

esi[3] = arg2
esi[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t ebx = *esi
bool cond:0 = ebx == esi[1]
int32_t var_48 = 0

if (cond:0)
    ebx = 0

int32_t var_44 = 0
int32_t eax_7
int32_t edx
edx:eax_7 = sx.q(arg2)
int32_t var_40 = 0
int32_t ecx_1 = (eax_7 - edx) s>> 1
int32_t eax_11
int32_t edx_1
edx_1:eax_11 = sx.q(arg2 + 1)
int32_t eax_13 = (eax_11 - edx_1) s>> 1
int32_t eax_15
int32_t edx_2
edx_2:eax_15 = sx.q(arg4)
int32_t eax_17 = (eax_15 - edx_2) s>> 1
int32_t eax_19
int32_t edx_3
edx_3:eax_19 = sx.q(arg4 + 1)
int32_t eax_21 = (eax_19 - edx_3) s>> 1
int32_t var_8_1 = 0
sub_648730(eax_21, ecx_1, &var_48, 1, arg5, 2, arg6)
int32_t eax_22 = var_48

if (eax_22 == var_44)
    eax_22 = 0

int32_t edi_2 = 0
int32_t var_30 = eax_22
int32_t var_3c
int32_t var_38

if (eax_17 s> 0)
    do
        sub_6c97b0(eax_22, esi[3], ebx, esi[4], eax_22, var_3c, var_38, 0, edi_2)
        eax_22 = var_30
        edi_2 += 1
    while (edi_2 s< eax_17)

sub_648730(eax_22, eax_13, &var_48, 1, arg5, 3, arg6)
int32_t ecx_5 = var_48
int32_t eax_23 = 0

if (ecx_5 == var_44)
    ecx_5 = 0

int32_t edi_3 = 0
int32_t var_30_1 = ecx_5

if (eax_21 s> 0)
    do
        int32_t eax_25 = eax_17 + edi_3
        eax_23 = sub_6c97b0(eax_25, esi[3], ebx, esi[4], ecx_5, var_3c, var_38, ecx_1, eax_25)
        ecx_5 = var_30_1
        edi_3 += 1
    while (edi_3 s< eax_21)

sub_648730(eax_23, 1, &var_48, eax_17, arg5, 0, arg6)
int32_t eax_26 = var_48
int32_t ebx_1 = var_38
int32_t ecx_8 = eax_26

if (eax_26 == var_44)
    ecx_8 = 0

int32_t var_30_2 = ecx_8

if (eax_13 s> 0)
    int32_t edi_4 = 0
    
    do
        int32_t eax_28 = ecx_1 + edi_4
        sub_6c97b0(eax_28, esi[3], ebx, esi[4], ecx_8, var_3c, ebx_1, eax_28, 0)
        ecx_8 = var_30_2
        edi_4 += 1
    while (edi_4 s< eax_13)

if (eax_21 s> 0)
    var_3c = 1
    sub_5979b0(&var_48, eax_21 << 2)
    int32_t ebx_2 = var_48
    int32_t eax_31 = ebx_2
    int32_t* var_5c = nullptr
    
    if (ebx_2 == var_44)
        eax_31 = 0
    
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0
    int32_t edi_5 = arg6
    var_8_1.b = 1
    
    if (edi_5 s<= 0)
        ebx_1 = eax_21
    else
        int32_t var_50_1 = 1
        int32_t var_4c_1 = edi_5
        sub_5979b0(&var_5c, edi_5 << 2)
        int32_t* eax_33 = var_5c
        int32_t ebx_3 = 0
        int32_t edx_9 = var_58_1
        int32_t* ecx_12 = eax_33
        
        if (eax_33 == edx_9)
            ecx_12 = nullptr
        
        int32_t* var_24_2 = ecx_12
        
        if (edi_5 s> 0)
            do
                int32_t eax_34 = ebx_3
                int32_t edx_10
                
                if (edi_5 != 1)
                    if (edi_5 - 1 s<= 0)
                        if (edi_5 - 1 s< 0)
                            if (ebx_3 s< edi_5 - 1)
                                eax_34 = edi_5 - 1
                            else if (ebx_3 s> 0)
                                eax_34 = 0
                    else if (ebx_3 s< 0)
                        eax_34 = 0
                    else if (ebx_3 s> edi_5 - 1)
                        eax_34 = edi_5 - 1
                    
                    edx_10 = divs.dp.d(sx.q(eax_34 * 0xff), edi_5 - 1)
                else
                    edx_10 = 0xff
                
                if (arg5 != 0)
                    edx_10 = 0xff - edx_10
                    ecx_12 = var_24_2
                
                ebx_3 += 1
                *ecx_12 = ((edx_10 << 8 | edx_10) << 8 | edx_10) << 8 | edx_10
                ecx_12 = &ecx_12[1]
                var_24_2 = ecx_12
            while (ebx_3 s< arg6)
            
            esi = var_28
            edi_5 = arg6
            eax_33 = var_5c
            edx_9 = var_58_1
        
        int32_t* ecx_14 = eax_33
        int32_t eax_46
        int32_t edx_12
        edx_12:eax_46 = sx.q(eax_21)
        
        if (eax_33 == edx_9)
            ecx_14 = nullptr
        
        int32_t i_2 = divs.dp.d(edx_12:eax_46, edi_5)
        int32_t* var_34_1 = ecx_14
        int32_t i_1 = i_2
        
        if (mods.dp.d(edx_12:eax_46, edi_5) != 0)
            i_2 += 1
            i_1 = i_2
        
        ebx_1 = eax_21
        int32_t edi_7 = 0
        
        if (i_2 s> 0)
            int32_t i
            
            do
                i_2 = sub_6c97b0(i_2, var_3c, eax_31, ebx_1, ecx_14, var_50_1, var_4c_1, 0, edi_7)
                edi_7 += arg6
                i = i_1
                i_1 -= 1
                ecx_14 = var_34_1
            while (i != 1)
            esi = var_28
        
        int32_t* eax_47 = var_5c
        
        if (eax_47 != 0)
            j__free(eax_47)

int32_t ecx_16 = var_48
int32_t eax_48 = ecx_16

if (ecx_16 == var_44)
    eax_48 = 0

int32_t edi_8 = 0
int32_t var_34_2 = eax_48

if (ecx_1 s> 0)
    do
        sub_6c97b0(eax_48, esi[3], ebx, esi[4], eax_48, var_3c, ebx_1, edi_8, eax_17)
        eax_48 = var_34_2
        edi_8 += 1
    while (edi_8 s< ecx_1)

int32_t eax_49 = var_48

if (eax_49 != 0)
    j__free(eax_49)

eax_49.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_49
