// 函数: sub_4d8de0
// 地址: 0x4d8de0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_187c608 != 1)
    int32_t eax_2 = sub_4d8d70(&data_1b8ad60)
    RECT rect
    
    if (eax_2 == 3 || eax_2 == 4)
        data_1b8a71c = 1
        
        if (eax_2 != 3)
            InvalidateRect(data_7027bc, nullptr, 0)
            data_1321ec8 = 0
        else
            rect.left = data_1356ec4
            rect.top = data_1356ec8
            rect.right = data_1356ecc + 1
            rect.bottom = data_1356ed0 + 1
            InvalidateRect(data_7027bc, &rect, 0)
    else if (eax_2 == 2)
        if (data_1c0529c == 0)
            int32_t* ecx_5 = data_1b8ad64
            int32_t* var_1c_1 = ecx_5
            int32_t i_2 = 0
            
            if (data_1b8ad6c s> 0)
                int32_t i
                
                do
                    rect.left =
                        divs.dp.d(sx.q(*ecx_5 * data_1356ed4), data_1332b60) - 1 + data_1356ec4
                    int32_t ecx_6 = data_1356ec8
                    rect.top = divs.dp.d(sx.q(ecx_5[1] * data_1356ec0), data_1332b64) - 1 + ecx_6
                    rect.right = divs.dp.d(sx.q((var_1c_1[2] + 1) * data_1356ed4), data_1332b60) + 1
                        + data_1356ec4
                    data_1332b64
                    int32_t ecx_8 =
                        ecx_6 + 1 + divs.dp.d(sx.q((var_1c_1[3] + 1) * data_1356ec0), data_1332b64)
                    rect.bottom = ecx_8
                    
                    if (data_1311175 != 0 && data_1c051e0 != 0)
                        int32_t eax_33 = data_1c05298
                        rect.top -= eax_33
                        rect.bottom = ecx_8 - eax_33
                    
                    int32_t left = rect.left
                    
                    if ((left.b & 1) != 0)
                        rect.left = left - 1
                    
                    InvalidateRect(data_7027bc, &rect, 0)
                    i = i_2 + 1
                    ecx_5 = &var_1c_1[4]
                    i_2 = i
                    var_1c_1 = ecx_5
                while (i s< data_1b8ad6c)
        else
            int32_t* esi_1 = data_1b8ad64
            int32_t i_3 = 0
            
            if (data_1b8ad6c s> 0)
                int32_t i_1
                
                do
                    int32_t ebx_2 = *esi_1 + data_1356ec4
                    int32_t ecx_1 = data_1356ec8
                    rect.left = ebx_2
                    int32_t edi_2 = esi_1[1] + ecx_1
                    rect.top = edi_2
                    rect.right = esi_1[2] + 1 + data_1356ec4
                    int32_t ecx_3 = ecx_1 + 1 + esi_1[3]
                    rect.bottom = ecx_3
                    
                    if (data_1311175 != 0 && data_1c051e0 != 0)
                        rect.top = edi_2 - data_1c05298
                        rect.bottom = ecx_3 - data_1c05298
                    
                    if ((ebx_2.b & 1) != 0)
                        rect.left = ebx_2 - 1
                    
                    InvalidateRect(data_7027bc, &rect, 0)
                    esi_1 = &esi_1[4]
                    i_1 = i_3 + 1
                    i_3 = i_1
                while (i_1 s< data_1b8ad6c)
else
    sub_41ac20()

data_1af0f24 = data_1332b3c
data_1af0f20 = data_1332b38
data_1af0f30 = data_1332b34
data_1af0f2c = data_1332b30
int32_t result = data_1321ecc
data_1af0f28 = result
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
