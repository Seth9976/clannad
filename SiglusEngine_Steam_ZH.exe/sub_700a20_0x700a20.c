// 函数: sub_700a20
// 地址: 0x700a20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c22b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_8
int32_t* ebx = arg_8
sub_563d80(&arg_8)
int32_t* ecx_2 = *ebx
int32_t* esi
int32_t* edi

if (*(ecx_2 + 0xd) == 0)
    if (*(ebx[2] + 0xd) != 0)
        edi = ecx_2
        goto label_700a7d
    
    int32_t* edx_1 = arg_8
    edi = edx_1[2]
    
    if (edx_1 == ebx)
        goto label_700a7d
    
    ecx_2[1] = edx_1
    *edx_1 = *ebx
    
    if (edx_1 != ebx[2])
        esi = edx_1[1]
        
        if (*(edi + 0xd) == 0)
            edi[1] = esi
        
        *esi = edi
        edx_1[2] = ebx[2]
        *(ebx[2] + 4) = edx_1
    else
        esi = edx_1
    
    void* eax_14 = data_4ebe4a8
    
    if (*(eax_14 + 4) != ebx)
        int32_t** eax_15 = ebx[1]
        
        if (*eax_15 != ebx)
            eax_15[2] = edx_1
        else
            *eax_15 = edx_1
    else
        *(eax_14 + 4) = edx_1
    
    edx_1[1] = ebx[1]
    int32_t eax_16
    eax_16.b = ebx[3].b
    ecx_2.b = edx_1[3].b
    edx_1[3].b = eax_16.b
    ebx[3].b = ecx_2.b
else
    edi = ebx[2]
label_700a7d:
    esi = ebx[1]
    
    if (*(edi + 0xd) == 0)
        edi[1] = esi
    
    void* eax_4 = data_4ebe4a8
    
    if (*(eax_4 + 4) == ebx)
        *(eax_4 + 4) = edi
    else if (*esi != ebx)
        esi[2] = edi
    else
        *esi = edi
    
    if (*data_4ebe4a8 == ebx)
        int32_t* ecx_3
        
        if (*(edi + 0xd) == 0)
            int32_t* eax_6 = *edi
            ecx_3 = edi
            
            while (*(eax_6 + 0xd) == 0)
                ecx_3 = eax_6
                eax_6 = *ecx_3
        else
            ecx_3 = esi
        
        *data_4ebe4a8 = ecx_3
    
    if (*(data_4ebe4a8 + 8) == ebx)
        if (*(edi + 0xd) == 0)
            *(data_4ebe4a8 + 8) = sub_563d60(edi)
        else
            *(data_4ebe4a8 + 8) = esi

if (ebx[3].b == 1)
    if (edi != *(data_4ebe4a8 + 4))
        while (edi[3].b == 1)
            int32_t* ecx_7 = *esi
            
            if (edi != ecx_7)
                if (ecx_7[3].b == 0)
                    ecx_7[3].b = 1
                    esi[3].b = 0
                    sub_700d60(esi)
                    ecx_7 = *esi
                
                if (*(ecx_7 + 0xd) == 0)
                    if (*(ecx_7[2] + 0xc) != 1 || *(*ecx_7 + 0xc) != 1)
                        if ((*ecx_7)[3].b == 1)
                            *(ecx_7[2] + 0xc) = 1
                            ecx_7[3].b = 0
                            sub_700d00(ecx_7)
                            ecx_7 = *esi
                        
                        int32_t** eax_27
                        eax_27.b = esi[3].b
                        ecx_7[3].b = eax_27.b
                        esi[3].b = 1
                        *(*ecx_7 + 0xc) = 1
                        sub_700d60(esi)
                        break
                    
                    ecx_7[3].b = 0
            else
                ecx_7 = esi[2]
                
                if (ecx_7[3].b == 0)
                    ecx_7[3].b = 1
                    esi[3].b = 0
                    sub_700d00(esi)
                    ecx_7 = esi[2]
                
                if (*(ecx_7 + 0xd) == 0)
                    if (*(*ecx_7 + 0xc) != 1 || *(ecx_7[2] + 0xc) != 1)
                        if (ecx_7[2][3].b == 1)
                            *(*ecx_7 + 0xc) = 1
                            ecx_7[3].b = 0
                            sub_700d60(ecx_7)
                            ecx_7 = esi[2]
                        
                        void** eax_21
                        eax_21.b = esi[3].b
                        ecx_7[3].b = eax_21.b
                        esi[3].b = 1
                        *(ecx_7[2] + 0xc) = 1
                        sub_700d00(esi)
                        break
                    
                    ecx_7[3].b = 0
            
            edi = esi
            esi = esi[1]
            
            if (edi == *(data_4ebe4a8 + 4))
                break
    
    edi[3].b = 1

void* var_14_1 = &ebx[4]
int32_t var_8_1 = 0
int32_t* edi_1 = ebx[0xb]

if (edi_1 != 0)
    bool cond:2_1 = edi_1[1] != 1
    edi_1[1]
    edi_1[1] -= 1
    
    if (not(cond:2_1))
        (*(*edi_1 + 4))(eax_2)
        bool cond:3_1 = edi_1[2] != 1
        edi_1[2]
        edi_1[2] -= 1
        
        if (not(cond:3_1))
            (*(*edi_1 + 8))()

if (ebx[9] u>= 8)
    j__free(ebx[4])

ebx[9] = 7
ebx[8] = 0
ebx[4].w = 0
j__free(ebx)
int32_t eax_33 = data_4ebe4ac
int32_t* ecx_12 = arg_8

if (eax_33 != 0)
    data_4ebe4ac = eax_33 - 1

*arg1 = ecx_12
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
