// 函数: sub_69a220
// 地址: 0x69a220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9346
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t* data_1 = __chkstk(0x2124)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
int32_t var_24 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
uint32_t data = data_1
int32_t cbData_2 = 0
int16_t strIn
HRESULT result = sub_69a090(data_1, &strIn)

if (result s>= 0)
    if (sub_699ed0(&strIn, &cbData_2) != 0)
        sub_69a040(data_1)
        int32_t ecx_4
        result, ecx_4 = sub_69a090(data_1, &strIn)
        
        if (result s>= 0)
            uint32_t eax_5 = zx.d(cbData_2.w)
            char* lpData
            void var_2118
            void var_2016
            enum WIN32_ERROR edi_2
            
            if (eax_5 s> 0x13)
                if (eax_5 == 0x4008)
                    int16_t* ecx_13 = &strIn
                    
                    do
                        eax_5.w = *ecx_13
                        ecx_13 = &ecx_13[1]
                    while (eax_5.w != 0)
                    
                    lpData = nullptr
                    int32_t var_8_2 = 0
                    var_8_2.b = 1
                    sub_69ccc0(&lpData, ((ecx_13 - &var_2016) s>> 1) + 2)
                    int16_t* lpData_2 = lpData
                    
                    if (lpData_2 == 0)
                        edi_2 = ERROR_OUTOFMEMORY
                    else
                        int16_t* lpsz_1 = &strIn
                        
                        if (strIn != 0)
                            do
                                PWSTR lpsz = CharNextW(lpsz_1)
                                uint32_t ecx_18 = zx.d(*lpsz_1)
                                
                                if (ecx_18 != 0x5c || *lpsz != 0x30)
                                    *lpData_2 = ecx_18.w
                                    lpData_2 = &lpData_2[1]
                                    lpsz_1 = &lpsz_1[1]
                                else
                                    *lpData_2 = 0
                                    lpData_2 = &lpData_2[1]
                                    lpsz_1 = CharNextW(lpsz)
                            while (*lpsz_1 != 0)
                        
                        *lpData_2 = 0
                        void* eax_15 = sub_6994c0(arg1, arg2, lpData)
                        lpData_2 = lpData
                        edi_2 = eax_15
                    
                    if (lpData_2 != &var_2118)
                        std::_Timevec::~_Timevec(&lpData)
                    
                    goto label_69a5ac
                
            label_69a5c1:
                HRESULT result_3 = sub_69a090(data_1, arg3)
                HRESULT result_2 = 0
                
                if (result_3 s< 0)
                    result_2 = result_3
                
                result = result_2
            else
                uint32_t pulOut
                
                if (eax_5 == 0x13)
                    cbData_2 = 0
                    HRESULT result_1 = VarUI4FromStr(&strIn, 0, 0, &pulOut)
                    
                    if (result_1 s>= 0)
                        uint32_t cbData = 4
                        data = pulOut
                        edi_2 = RegSetValueExW(*arg1, arg2, 0, REG_DWORD, &data, cbData)
                        sub_5cbbd0(&cbData_2)
                    label_69a5ac:
                        
                        if (edi_2 == NO_ERROR)
                            goto label_69a5c1
                        
                        result = sub_698f50(edi_2)
                    else
                        sub_5cbbd0(&cbData_2)
                        result = result_1
                else
                    if (eax_5 == 8)
                        int32_t var_28_5 = ecx_4
                        edi_2 = sub_699470(arg1, arg2, &strIn)
                        goto label_69a5ac
                    
                    if (eax_5 != 0x11)
                        goto label_69a5c1
                    
                    int16_t* ebx_1 = &strIn
                    
                    do
                        eax_5.w = *ebx_1
                        ebx_1 = &ebx_1[1]
                    while (eax_5.w != 0)
                    
                    int32_t pulOut_1 = (ebx_1 - &var_2016) s>> 1
                    pulOut = pulOut_1
                    
                    if ((pulOut_1.b & 1) != 0)
                        result = E_FAIL
                    else
                        lpData = nullptr
                        int32_t eax_7
                        int32_t edx_2
                        edx_2:eax_7 = sx.q(pulOut_1)
                        int32_t cbData_1 = (eax_7 - edx_2) s>> 1
                        cbData_2 = cbData_1
                        int32_t var_8_1 = 3
                        var_8_1.b = 4
                        sub_69cd10(&lpData, cbData_1)
                        char* lpData_1 = lpData
                        
                        if (lpData_1 != 0)
                            _memset(lpData_1, 0, cbData_1)
                            int32_t edi_1 = 0
                            
                            if (pulOut_1 s> 0)
                                do
                                    void* esi_4 = &lpData[edi_1 u>> 1]
                                    char eax_9 = sub_699f90((&strIn)[edi_1])
                                    int32_t edx_4 = edi_1 & 1
                                    edi_1 += 1
                                    *esi_4 |= eax_9 << (4 - (edx_4 << 2).w).b
                                while (edi_1 s< pulOut_1)
                                
                                cbData_1 = cbData_2
                            
                            edi_2 = RegSetValueExW(*arg1, arg2, 0, REG_BINARY, lpData, cbData_1)
                            
                            if (lpData != &var_2118)
                                std::_Timevec::~_Timevec(&lpData)
                            
                            goto label_69a5ac
                        
                        if (&var_2118 != 0)
                            std::_Timevec::~_Timevec(&lpData)
                        
                        result = E_FAIL
    else
        result = DISP_E_EXCEPTION

fsbase->NtTib.ExceptionList = ExceptionList
int32_t entry_ebx
sub_745f2b(entry_ebx ^ &__saved_ebp)
return result
