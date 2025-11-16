// 函数: sub_6cf770
// 地址: 0x6cf770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_ec
int32_t eax_1 = __security_cookie ^ &var_ec
int32_t ebx
int32_t var_f0 = ebx
uint32_t eax_2 = arg2
var_ec = eax_2

if (arg1 != 0 && eax_2 != 0)
    sub_6d8440(arg1, arg2)
    
    while (true)
        uint32_t eax_3 = sub_6d84f0(arg1)
        int32_t edi_1 = *(arg1 + 0x11c)
        int32_t eax_4 = *(arg1 + 0x74)
        
        if (edi_1 != 0x49444154)
            if ((eax_4.b & 4) != 0)
                eax_4 |= 8
                *(arg1 + 0x74) = eax_4
            
            if (edi_1 == 0x49484452)
                sub_6d8e50(eax_4, var_ec, arg1, eax_3)
                continue
            else if (edi_1 == 0x49454e44)
                int32_t eax_6 = *(arg1 + 0x74)
                
                if ((eax_6.b & 1) == 0 || (eax_6.b & 4) == 0)
                    sub_6d47a0(arg1, "out of place")
                    noreturn
                
                *(arg1 + 0x74) = eax_6 | 0x18
                sub_6d8610(arg1, eax_3)
                
                if (eax_3 == 0)
                    continue
                else
                    sub_6d4840(arg1, "invalid")
                    continue
        else
            if ((eax_4.b & 1) == 0)
                sub_6d47a0(arg1, "Missing IHDR before IDAT")
                noreturn
            
            if (*(arg1 + 0x14f) == 3 && (eax_4.b & 2) == 0)
                sub_6d47a0(arg1, "Missing PLTE before IDAT")
                noreturn
            
            if ((eax_4.b & 8) != 0)
                if ((*(arg1 + 0x78) & 0x100000) == 0)
                    sub_6d47a0(arg1, "Too many IDATs found")
                    noreturn
                
                char var_e8[0xdc]
                sub_6d4690(eax_4, &var_e8, arg1, "Too many IDATs found")
                sub_6d4470(arg1, &var_e8)
            
            *(arg1 + 0x74) |= 4
        
        eax_2 = sub_6cb630(arg1, edi_1)
        
        if (eax_2 != 0)
            int32_t eax_5 = sub_6db870(eax_2, var_ec, arg1, eax_3, eax_2)
            
            if (edi_1 != 0x504c5445)
                if (edi_1 == 0x49444154)
                    *(arg1 + 0x134) = 0
                    sub_745f2b(eax_1 ^ &var_ec)
                    return eax_5
            else
                *(arg1 + 0x74) |= 2
        else if (edi_1 != 0x504c5445)
            if (edi_1 == 0x49444154)
                *(arg1 + 0x134) = eax_3
                break
            
            int32_t* edx_7 = var_ec
            
            if (edi_1 == 0x624b4744)
                sub_6da2e0(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x6348524d)
                sub_6d9540(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x67414d41)
                sub_6d9220(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x68495354)
                sub_6da520(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x6f464673)
                sub_6da810(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x7043414c)
                sub_6da9d0(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x7343414c)
                sub_6dad70(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x70485973)
                sub_6da6a0(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x73424954)
                sub_6d9320(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x73524742)
                sub_6d9750(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x69434350)
                sub_6d9890(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x73504c54)
                sub_6d9e00(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x74455874)
                sub_6db100(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x74494d45)
                sub_6daff0(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x74524e53)
                sub_6da070(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 == 0x7a545874)
                sub_6db230(eax_2, edx_7, arg1, eax_3)
            else if (edi_1 != 0x69545874)
                sub_6db870(eax_2, edx_7, arg1, eax_3, 0)
            else
                sub_6db460(eax_2, edx_7, arg1, eax_3)
        else
            sub_6d9020(eax_2, var_ec, arg1, eax_3)

sub_745f2b(eax_1 ^ &var_ec)
return eax_2
