// 函数: sub_70c970
// 地址: 0x70c970
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d09f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_8
int32_t* eax_3 = arg_8
sub_563d80(&arg_8)
int32_t* edx = eax_3
int32_t** esi = *edx
int32_t** esi_1
int32_t** edi

if (*(esi + 0xd) == 0)
    if (*(edx[2] + 0xd) != 0)
        edi = esi
        goto label_70c9d6
    
    int32_t* ecx_1 = arg_8
    edi = ecx_1[2]
    
    if (ecx_1 == edx)
        goto label_70c9d6
    
    esi[1] = ecx_1
    *ecx_1 = *edx
    
    if (ecx_1 != edx[2])
        esi_1 = ecx_1[1]
        
        if (*(edi + 0xd) == 0)
            edi[1] = esi_1
        
        *esi_1 = edi
        ecx_1[2] = edx[2]
        *(edx[2] + 4) = ecx_1
    else
        esi_1 = ecx_1
    
    void* eax_14 = *arg1
    
    if (*(eax_14 + 4) != edx)
        int32_t** eax_15 = edx[1]
        
        if (*eax_15 != edx)
            eax_15[2] = ecx_1
        else
            *eax_15 = ecx_1
    else
        *(eax_14 + 4) = ecx_1
    
    ecx_1[1] = edx[1]
    int32_t eax_16
    eax_16.b = edx[3].b
    int32_t* edx_1 = ecx_1
    ecx_1.b = ecx_1[3].b
    edx_1[3].b = eax_16.b
    edx = eax_3
    edx[3].b = ecx_1.b
else
    edi = edx[2]
label_70c9d6:
    esi_1 = edx[1]
    
    if (*(edi + 0xd) == 0)
        edi[1] = esi_1
    
    void* eax_5 = *arg1
    
    if (*(eax_5 + 4) == edx)
        *(eax_5 + 4) = edi
    else if (*esi_1 != edx)
        esi_1[2] = edi
    else
        *esi_1 = edi
    
    int32_t* eax_6 = *arg1
    
    if (*eax_6 == edx)
        int32_t** ecx_2
        
        if (*(edi + 0xd) == 0)
            int32_t* eax_7 = *edi
            ecx_2 = edi
            
            while (*(eax_7 + 0xd) == 0)
                ecx_2 = eax_7
                eax_7 = *ecx_2
            
            eax_6 = *arg1
        else
            ecx_2 = esi_1
        
        *eax_6 = ecx_2
    
    if (*(*arg1 + 8) == edx)
        if (*(edi + 0xd) == 0)
            edx = eax_3
            *(*arg1 + 8) = sub_563d60(edi)
        else
            *(*arg1 + 8) = esi_1

if (edx[3].b == 1)
    if (edi != *(*arg1 + 4))
        while (edi[3].b == 1)
            int32_t* ecx_6 = *esi_1
            
            if (edi != ecx_6)
                if (ecx_6[3].b == 0)
                    ecx_6[3].b = 1
                    esi_1[3].b = 0
                    std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                        arg1, esi_1)
                    ecx_6 = *esi_1
                
                if (*(ecx_6 + 0xd) == 0)
                    if (*(ecx_6[2] + 0xc) != 1 || *(*ecx_6 + 0xc) != 1)
                        if ((*ecx_6)[3].b == 1)
                            *(ecx_6[2] + 0xc) = 1
                            ecx_6[3].b = 0
                            std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                                arg1, ecx_6)
                            ecx_6 = *esi_1
                        
                        int32_t** eax_27
                        eax_27.b = esi_1[3].b
                        ecx_6[3].b = eax_27.b
                        esi_1[3].b = 1
                        *(*ecx_6 + 0xc) = 1
                        std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                            arg1, esi_1)
                        break
                    
                    ecx_6[3].b = 0
            else
                ecx_6 = esi_1[2]
                
                if (ecx_6[3].b == 0)
                    ecx_6[3].b = 1
                    esi_1[3].b = 0
                    std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                        arg1, esi_1)
                    ecx_6 = esi_1[2]
                
                if (*(ecx_6 + 0xd) == 0)
                    if (*(*ecx_6 + 0xc) != 1 || *(ecx_6[2] + 0xc) != 1)
                        if (ecx_6[2][3].b == 1)
                            *(*ecx_6 + 0xc) = 1
                            ecx_6[3].b = 0
                            std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                                arg1, ecx_6)
                            ecx_6 = esi_1[2]
                        
                        void** eax_21
                        eax_21.b = esi_1[3].b
                        ecx_6[3].b = eax_21.b
                        esi_1[3].b = 1
                        *(ecx_6[2] + 0xc) = 1
                        std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                            arg1, esi_1)
                        break
                    
                    ecx_6[3].b = 0
            
            edi = esi_1
            esi_1 = esi_1[1]
            
            if (edi == *(*arg1 + 4))
                break
        
        edx = eax_3
    
    edi[3].b = 1

void* var_18_2 = &edx[4]
int32_t var_8_1 = 0
int32_t* edi_1 = edx[0xb]

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

if (edx[9] u>= 0x10)
    j__free(edx[4])

edx[9] = 0xf
edx[8] = 0
edx[4].b = 0
j__free(eax_3)
int32_t eax_34 = arg1[1]
int32_t* ecx_17 = arg_8

if (eax_34 != 0)
    arg1[1] = eax_34 - 1

*arg2 = ecx_17
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
