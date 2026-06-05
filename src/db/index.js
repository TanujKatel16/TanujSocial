import mongoose from "mongoose";
import {DB_NAME} from "../constants.js"

const connectDB = async()=>{
    try{

        console.log("URI:", process.env.MONGODB_URI);
        console.log("DB_NAME:", DB_NAME);
        console.log("FINAL:", `${process.env.MONGODB_URI}/${DB_NAME}`);

        const connectionInstance=await mongoose.connect(`${process.env.MONGODB_URI}/${DB_NAME}`)
        console.log(`\n MongoDB Connected !!" DB HOST:
        ${connectionInstance.connection.host}`);
        console.log(connectionInstance.connection.name);

        
    }
    catch (error){

        console.log("MONGODB connection error",error);
        process.exit(1);

    }
}

export default connectDB