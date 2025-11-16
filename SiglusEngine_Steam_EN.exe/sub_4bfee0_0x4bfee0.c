// 函数: sub_4bfee0
// 地址: 0x4bfee0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result_1 = 0
int32_t var_3c = 0
int32_t result

while (true)
    int32_t result_2 = 0
    data_208c70c = 0
    uint32_t eax_2 = auxGetNumDevs()
    uint32_t uDeviceID = 0
    AUXCAPSA pac
    
    if (eax_2 s<= 0)
        result = data_208c70c
    else
        do
            bool cond:0_1 = auxGetDevCapsA(uDeviceID, &pac, 0x30) != 0
            result = data_208c70c
            
            if (not(cond:0_1))
                if (result == 0x20)
                    break
                
                if (pac.wTechnology == 1 && (pac.wMid != 0x1a || pac.wPid != 0x10)
                        && (pac.dwSupport.b & 1) != 0)
                    *((result << 2) + &data_208cc50) = uDeviceID
                    result += 1
                    data_208c70c = result
            
            uDeviceID += 1
        while (uDeviceID s< eax_2)
    
    if (result != 0)
    label_4bffc0:
        int32_t i = 0
        
        if (result s> 0)
            do
                auxGetVolume(*((i << 2) + &data_208cc50), (i << 2) + &data_208ccd0)
                int32_t ecx_1 = *((i << 2) + &data_208ccd0)
                
                if (ecx_1 != 0)
                    *((result_2 << 2) + &data_208cc50) = *((i << 2) + &data_208cc50)
                    *((result_2 << 2) + &data_208ccd0) = ecx_1
                    result_2 += 1
                
                i += 1
            while (i s< data_208c70c)
        
        result = result_2
        data_208c70c = result
    else
        uint32_t uDeviceID_1 = 0
        
        if (eax_2 s> 0)
            do
                bool cond:1_1 = auxGetDevCapsA(uDeviceID_1, &pac, 0x30) != 0
                result = data_208c70c
                
                if (not(cond:1_1))
                    if (result == 0x20)
                        break
                    
                    if (pac.wTechnology == 2 && (pac.wMid != 0x1a || pac.wPid != 0x10)
                            && (pac.dwSupport.b & 1) != 0)
                        *((result << 2) + &data_208cc50) = uDeviceID_1
                        result += 1
                        data_208c70c = result
                
                uDeviceID_1 += 1
            while (uDeviceID_1 s< eax_2)
            
            if (result != 0)
                goto label_4bffc0
    
    if (var_3c != 0 && result != 0 && result_1 == result)
        break
    
    int32_t ecx_3 = var_3c + 1
    result_1 = result
    var_3c = ecx_3
    
    if (ecx_3 s> 0xa)
        data_208c70c = 0
        break

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
