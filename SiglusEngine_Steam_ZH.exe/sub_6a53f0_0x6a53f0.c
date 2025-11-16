// 函数: sub_6a53f0
// 地址: 0x6a53f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4_1 = ebp
int32_t* ecx = __chkstk(0x1244)
void var_8
int32_t eax_1 = __security_cookie ^ &var_8
int32_t result = ecx[3]
int32_t* var_4 = ecx
int32_t entry_ebx
int32_t var_c = entry_ebx

if (result == 0xffffffff)
    int32_t ebx = entry_ebx | result
    int32_t i = 0
    
    if (*(data_bac510 + 0x10b88) s> 0)
        __return_addr = 0xfffffff4
        void* __return_addr_1 = nullptr
        
        do
            void arg_4
            
            if (sub_6a50c0(ecx, i, &arg_4) != 0)
                char eax_5
                
                if (ebx != 0xffffffff)
                    eax_5 = sub_650590(*(*var_4 + __return_addr), &arg_4)
                
                if (ebx == 0xffffffff || eax_5 != 0)
                    ebx = i
                    __return_addr = __return_addr_1
            
            i += 1
            __return_addr_1 += 0xc
            ecx = var_4
        while (i s< *(data_bac510 + 0x10b88))
    
    ecx[3] = ebx
    result = ebx

sub_745f2b(eax_1 ^ &var_8)
return result
