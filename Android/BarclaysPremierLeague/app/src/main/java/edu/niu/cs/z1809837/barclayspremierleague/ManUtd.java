package edu.niu.cs.z1809837.barclayspremierleague;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;

public class ManUtd extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_man_utd);
    }

    public void goBack(View view){
        finish();
    }

}
