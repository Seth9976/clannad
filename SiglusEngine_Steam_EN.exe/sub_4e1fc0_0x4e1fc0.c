// 函数: sub_4e1fc0
// 地址: 0x4e1fc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605a71
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t* data_1 = __chkstk(0x1134)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1c = eax_2
int32_t ebx
int32_t var_18 = ebx
int32_t edi
int32_t var_20 = edi
int32_t var_24 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
uint8_t var_1020
char* var_28 = &var_1020
uint32_t data = data_1
PSTR lpValueName = arg3
uint32_t cbData_2 = 0
HRESULT result = sub_4e1e60(data_1, var_28)

if (result s>= 0)
    if (sub_4e1ca0(&var_1020, &cbData_2) != 0)
        sub_4e1e10(data_1)
        int32_t ecx_4
        result, ecx_4 = sub_4e1e60(data_1, &var_1020)
        
        if (result s>= 0)
            uint32_t eax_5 = zx.d(cbData_2.w)
            char* lpData
            void var_1124
            void var_101f
            enum WIN32_ERROR edi_3
            
            if (eax_5 s> 0x13)
                if (eax_5 == 0x4008)
                    uint8_t* ecx_18 = &var_1020
                    
                    do
                        eax_5.b = *ecx_18
                        ecx_18 = &ecx_18[1]
                    while (eax_5.b != 0)
                    
                    lpData = nullptr
                    int32_t var_8_3 = 0
                    var_8_3.b = 1
                    sub_4e7230(&lpData, ecx_18 - &var_101f + 2)
                    char* lpData_2 = lpData
                    
                    if (lpData_2 == 0)
                        edi_3 = ERROR_OUTOFMEMORY
                    else
                        char* lpsz_1 = &var_1020
                        
                        if (var_1020 != 0)
                            do
                                PSTR lpsz = CharNextA(lpsz_1)
                                char ecx_22 = *lpsz_1
                                
                                if (ecx_22 != 0x5c || *lpsz != 0x30)
                                    *lpData_2 = ecx_22
                                    
                                    if (IsDBCSLeadByte(*lpsz_1) != 0)
                                        BOOL eax_20
                                        eax_20.b = lpsz_1[1]
                                        lpsz_1 = &lpsz_1[1]
                                        lpData_2 = &lpData_2[1]
                                        
                                        if (eax_20.b == 0)
                                            break
                                        
                                        *lpData_2 = eax_20.b
                                    
                                    lpData_2 = &lpData_2[1]
                                    lpsz_1 = &lpsz_1[1]
                                else
                                    *lpData_2 = 0
                                    lpData_2 = &lpData_2[1]
                                    lpsz_1 = CharNextA(lpsz)
                            while (*lpsz_1 != 0)
                        
                        *lpData_2 = 0
                        void* eax_21 = sub_4e0ca0(arg2, lpValueName, lpData)
                        lpData_2 = lpData
                        edi_3 = eax_21
                    
                    if (lpData_2 != &var_1124)
                        std::_Timevec::~_Timevec(&lpData)
                    
                    goto label_4e23d2
                
            label_4e23e7:
                HRESULT result_3 = sub_4e1e60(data_1, arg4)
                HRESULT result_2 = 0
                
                if (result_3 s< 0)
                    result_2 = result_3
                
                result = result_2
            else
                uint32_t pulOut
                
                if (eax_5 == 0x13)
                    lpValueName = nullptr
                    uint8_t* edx_6 = &var_1020
                    int32_t var_8_2 = 3
                    
                    do
                        eax_5.b = *edx_6
                        edx_6 = &edx_6[1]
                    while (eax_5.b != 0)
                    
                    void* var_28_6 = &var_101f
                    cbData_2 = edx_6 - &var_101f + 1
                    int32_t eax_12 = sub_4d9120(&cbData_2, edx_6 - &var_101f + 1)
                    void* strIn
                    
                    if (eax_12 s>= 0)
                        uint32_t cbData_3 = cbData_2
                        char eax_13
                        
                        if (cbData_3 s<= 0x400)
                            eax_13 = sub_4d9150(cbData_3)
                        
                        int32_t* eax_15
                        
                        if (cbData_3 s> 0x400 || eax_13 == 0)
                            eax_15 = sub_4ded10(&lpValueName, cbData_3)
                        else
                            __alloca_probe_16(cbData_3)
                            int32_t* var_14_2 = &var_24
                            eax_15 = &var_24
                        
                        strIn = sub_4d9200(eax_15, &var_1020, cbData_3 u>> 1, 3)
                    
                    if (eax_12 s< 0 || strIn == 0)
                        sub_4ded60(&lpValueName)
                        result = E_OUTOFMEMORY
                    else
                        HRESULT result_1 = VarUI4FromStr(strIn, 0, 0, &pulOut)
                        
                        if (result_1 s>= 0)
                            uint32_t cbData = 4
                            data = pulOut
                            edi_3 = RegSetValueExA(*arg2, arg3, 0, REG_DWORD, &data, cbData)
                            sub_4ded60(&lpValueName)
                            goto label_4e23d2
                        
                        sub_4ded60(&lpValueName)
                        result = result_1
                else if (eax_5 == 8)
                    int32_t var_28_5 = ecx_4
                    edi_3 = sub_4e0c50(arg2, arg3, &var_1020)
                label_4e23d2:
                    
                    if (edi_3 == NO_ERROR)
                        goto label_4e23e7
                    
                    result = sub_4e0730(edi_3)
                else
                    if (eax_5 != 0x11)
                        goto label_4e23e7
                    
                    char* ebx_2 = &var_1020
                    
                    do
                        eax_5.b = *ebx_2
                        ebx_2 = &ebx_2[1]
                    while (eax_5.b != 0)
                    
                    uint32_t pulOut_1 = ebx_2 - &var_101f
                    pulOut = pulOut_1
                    
                    if ((pulOut_1.b & 1) != 0)
                        result = E_FAIL
                    else
                        lpData = nullptr
                        int32_t eax_7
                        int32_t edx_2
                        edx_2:eax_7 = sx.q(pulOut_1)
                        uint32_t cbData_1 = (eax_7 - edx_2) s>> 1
                        cbData_2 = cbData_1
                        int32_t var_8_1 = 4
                        var_8_1.b = 5
                        sub_4e7230(&lpData, cbData_1)
                        char* lpData_1 = lpData
                        
                        if (lpData_1 != 0)
                            _memset(lpData_1, 0, cbData_1)
                            int32_t edi_2 = 0
                            
                            if (pulOut_1 s> 0)
                                do
                                    void* esi_4 = &lpData[edi_2 u>> 1]
                                    char eax_9 = sub_4e1d60((&var_1020)[edi_2])
                                    int32_t edx_4 = edi_2 & 1
                                    edi_2 += 1
                                    *esi_4 |= eax_9 << (4 - (edx_4 << 2).b)
                                while (edi_2 s< pulOut_1)
                                
                                cbData_1 = cbData_2
                            
                            edi_3 =
                                RegSetValueExA(*arg2, lpValueName, 0, REG_BINARY, lpData, cbData_1)
                            
                            if (lpData != &var_1124)
                                std::_Timevec::~_Timevec(&lpData)
                            
                            goto label_4e23d2
                        
                        if (&var_1124 != 0)
                            std::_Timevec::~_Timevec(&lpData)
                        
                        result = E_FAIL
    else
        result = DISP_E_EXCEPTION

fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(arg1 ^ &__saved_ebp)
return result
