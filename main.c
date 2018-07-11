#include "crema_conf_NameOfProject_IO_header.h"
#include "crema_conf_NameOfProject_header.h"
#include "cremaConf.h"
#include "TEST_VECTOR.h"
int main(){
	
  DMAloadConfiguration(1, conf_0_fft, 0, conf_0_size); 
  
  
  DMAwriteConfigurationBufferMACRO(conf_IO_0_fft, 0); 
  while(ISDMAACTIVE);
  /*IMMEDIATE VALUE = 12 LOADING FOR SHIFT OPERATION*/
  DMAwriteIOMemMACRO(16,0,0,&imm_value,1,1,0,1,1,0,1);	
  while(ISDMAACTIVE);
  CREMAsetContext(0,0,0,0,0,0,0,0,0,0);
  
  DMAwriteIOMemMACRO(count, memId, cremaOff
  , ext_start,crema_blk_num, crema_blk
  , crema_inc, ext_blk_num, ext_blk, ext_inc, dir);
  	  
  coffee_internal_counter1_start();
  
  CREMAsetContext(dir, buf_num, ctx_num, crema_latency
  , wr_latency, wr_cycles, wr_stalls
  , rd_offset, wr_offset, cnt);
  
  coffee_internal_counter1_stop();
  
  return 1;
}

